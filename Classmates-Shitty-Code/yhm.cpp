#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void begin();

typedef struct hc {
    int        num;
    char       lieci[20];
    char       name[20];
    char       starting_station[20];
    char       ending_station[20];
    char       start_time[20];
    char       arrive_time[20];
    char       price[20];
    struct hc *next;

} train;

train *head;

void del(train *head) {
    system("cls");
    FILE  *fp1 = fopen("c:\\file\\huoche.txt", "w");
    train *p, *pf, *pp;
    pf = head;
    p  = head->next;
    printf("请输入要删除的列车车次\n");
    char a[20];
    scanf("%s", a);
    while (p != NULL) {
        if (strcmp(p->lieci, a) == 0) {
            pf->next = p->next;
            break;
        }
        pf = pf->next;
        p  = p->next;
    }
    pp = head->next;
    while (pp != NULL) {
        fprintf(fp1, "%d %s %s %s %s %s %s %s", pp->num, pp->lieci, pp->name, pp->starting_station, pp->ending_station, pp->start_time, pp->arrive_time, pp->price);
        pp = pp->next;
    }
    fclose(fp1);
}

void admin() {
    system("cls");
    printf("*********************************************\n");
    printf("*            1.删除列车车次                 *\n");
    printf("*            2.增加列车车次                 *\n");
    printf("*            3.返回上一界面                 *\n");
    printf("*            请输入操作码：                 *\n");
    printf("*********************************************\n");
    int a;
    while (scanf("%d", &a) != EOF) {
        switch (a) {
            case 1:
                del(head);
                break;
                //			case 2: add(head);break;
            case 3:
                begin();
                break;
            default:
                printf("Error!!\n");
                printf("请输入正确指令 或输入3以返回上一界面 \n");
        }
    }
}

void begin() {
    system("cls");
    printf("*********************************************\n");
    printf("**      欢迎使用车票管理系统！             **\n");
    printf("*        管理员登录请输入 1                 *\n");
    printf("*         用户登录请输入 2                  *\n");
    printf("*         关闭程序请输入 3                  *\n");
    printf("*********************************************\n");
    int a;
    while (scanf("%d", &a) != EOF) {
        if (a == 1)
            admin();
        //		else if(a == 2) user();
        //		else if(a == 3) return;
        else
            printf("Error!!!\n请输入正确指令\n");
    }
}


int main() {
    FILE *fp1 = fopen("c:\\file\\huoche.txt", "r");

    train *p, *pc, *pt;
    pc = head  = (train *) malloc(sizeof(train));
    head->next = NULL;
    pt         = head;
    for (int i = 0; i < 4; i++) {
        pc = (train *) malloc(sizeof(train));
        fscanf(fp1, "%d %s %s %s %s %s %s %s", &pc->num, pc->lieci, pc->name, pc->starting_station, pc->ending_station, pc->start_time, pc->arrive_time, pc->price);
        pc->next = NULL;
        pt->next = pc;
        pt       = pc;
    }

    begin();

    fclose(fp1);
    return 0;
}
