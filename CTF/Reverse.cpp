#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const char *v4;
    const char *v5;
    int v7[2];
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    char String[] = "HelloWorld";
    char v18[65536];

//    memset(String, 0, 0xFFFFu);
    if (strlen(String) == 8)
    {
        v7[0] = 90;
        v7[1] = 74;
        v8 = 83;
        v9 = 69;
        v10 = 67;
        v11 = 97;
        v12 = 78;
        v13 = 72;
        v14 = '3';
        v15 = 110;
        v16 = 103;
        sub_4010F0(v7, 0, 10);
        memset(v18, 0, 0xFFFFu);
        v18[0] = String[5];
        v18[2] = String[7];
        v18[1] = String[6];
        v4 = (const char *) sub_401000(v18, strlen(v18));
        memset(v18, 0, 0xFFFFu);
        v18[1] = String[3];
        v18[0] = String[2];
        v18[2] = String[4];
        v5 = (const char *) sub_401000(v18, strlen(v18));
        if (String[0] == v7[0] + 34
            && String[1] == v10
            && 4 * String[2] - 141 == 3 * v8
            && String[3] / 4 == 2 * (v13 / 9)
            && !strcmp(v4, "ak1w") //jMp
            && !strcmp(v5, "V1Ax")) //WP1
        {
            //String = "|CWP1jMp"
            cout << "OK" << endl;
        }
    }
    return 0;
}