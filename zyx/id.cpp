//
// Created by sfc9982 on 2022/5/4.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[100][100];

void init()
{
    strcpy(name[1], "机械与动力工程学院");
    strcpy(name[2], "电气工程学院");
    strcpy(name[3], "化工学院");
    strcpy(name[4], "土木工程学院");
    strcpy(name[5], "水利科学与工程学院");
    strcpy(name[6], "力学与安全工程学院");
    strcpy(name[7], "管理工程学院");
    strcpy(name[8], "材料科学与工程学院");
    strcpy(name[9], "建筑学院");
    strcpy(name[10], "地球科学与技术学院");
    strcpy(name[11], "生态与环境学院");
    strcpy(name[21], "数学与统计学院");
    strcpy(name[22], "物理学院");
    strcpy(name[23], "化学学院");
    strcpy(name[24], "信息工程学院");
    strcpy(name[31], "商学院");
    strcpy(name[32], "旅游管理学院");
    strcpy(name[33], "政治与公共管理学院");
    strcpy(name[34], "信息管理学院");
    strcpy(name[35], "法学院");
    strcpy(name[36], "文学院");
    strcpy(name[37], "外国语与国际关系学院");
    strcpy(name[38], "历史学院");
    strcpy(name[39], "马克思主义学院");
    strcpy(name[63], "口腔医学院");
    strcpy(name[40], "新闻与传播学院");
    strcpy(name[41], "教育学院");
    strcpy(name[45], "书法学院");
    strcpy(name[46], "美术学院");
    strcpy(name[47], "生命科学学院");
    strcpy(name[48], "音乐学院");
    strcpy(name[49], "体育学院(校本部)");
    strcpy(name[51], "基础医学院");
    strcpy(name[52], "公共卫生学院");
    strcpy(name[53], "药学院");
    strcpy(name[54], "护理与健康学院");
    strcpy(name[90], "交换生");
}

int main()
{
    init();
    char id[100];
    while (scanf("%s", id) != EOF)
    {
        int len = strlen(id);
        if (len != 12)
        {
            printf("%s 不是有效的学生学号\n", id);
            continue;
        }
        long long n = atoll(id);
        if (n == 0)
            break;
        int year = n / 1e8;
        if (year < 2018 || year > 2021)
        {
            printf("日期 %d 错误\n", year);
            continue;
        }
        int _class = n % 10000 / 100;
        int num = n % 100;
        int institute_id = n % 1000000 / 10000;
        char institute_name[100];
        strcpy(institute_name, name[institute_id]);
        printf("%d级, %s, %d班, %d号\n", year, institute_name, _class, num);
    }

    return 0;
}