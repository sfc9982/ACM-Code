#include <iostream>
#include <cstring>

using namespace std;

const int DAT[] = {0x65, 0x08, 0xf7, 0x12, 0xbc, 0xc3, 0xcf, 0xb8, 0x83, 0x7b, 0x02, 0xd5, 0x34, 0xbd, 0x9f, 0x33,
                   0x77,
                   0x76, 0xd4, 0xd7, 0xeb, 0x90, 0x89, 0x5e, 0x54, 0x01, 0x7d, 0xf4, 0x11, 0xff, 0x99, 0x49, 0xad,
                   0x57,
                   0x46, 0x67, 0x2a, 0x9d, 0x7f, 0xd2, 0xe1, 0x21, 0x8b, 0x1d, 0x5a, 0x91, 0x38, 0x94, 0xf9, 0x0c,
                   0x00,
                   0xca, 0xe8, 0xcb, 0x5f, 0x19, 0xf6, 0xf0, 0x3c, 0xde, 0xda, 0xea, 0x9c, 0x14, 0x75, 0xa4, 0x0d,
                   0x25,
                   0x58, 0xfc, 0x44, 0x86, 0x05, 0x6b, 0x43, 0x9a, 0x6d, 0xd1, 0x63, 0x98, 0x68, 0x2d, 0x52, 0x3d,
                   0xdd,
                   0x88, 0xd6, 0xd0, 0xa2, 0xed, 0xa5, 0x3b, 0x45, 0x3e, 0xf2, 0x22, 0x06, 0xf3, 0x1a, 0xa8, 0x09,
                   0xdc,
                   0x7c, 0x4b, 0x5c, 0x1e, 0xa1, 0xb0, 0x71, 0x04, 0xe2, 0x9b, 0xb7, 0x10, 0x4e, 0x16, 0x23, 0x82,
                   0x56,
                   0xd8, 0x61, 0xb4, 0x24, 0x7e, 0x87, 0xf8, 0x0a, 0x13, 0xe3, 0xe4, 0xe6, 0x1c, 0x35, 0x2c, 0xb1,
                   0xec,
                   0x93, 0x66, 0x03, 0xa9, 0x95, 0xbb, 0xd3, 0x51, 0x39, 0xe7, 0xc9, 0xce, 0x29, 0x72, 0x47, 0x6c,
                   0x70,
                   0x15, 0xdf, 0xd9, 0x17, 0x74, 0x3f, 0x62, 0xcd, 0x41, 0x07, 0x73, 0x53, 0x85, 0x31, 0x8a, 0x30,
                   0xaa,
                   0xac, 0x2e, 0xa3, 0x50, 0x7a, 0xb5, 0x8e, 0x69, 0x1f, 0x6a, 0x97, 0x55, 0x3a, 0xb2, 0x59, 0xab,
                   0xe0,
                   0x28, 0xc0, 0xb3, 0xbe, 0xcc, 0xc6, 0x2b, 0x5b, 0x92, 0xee, 0x60, 0x20, 0x84, 0x4d, 0x0f, 0x26,
                   0x4a,
                   0x48, 0x0b, 0x36, 0x80, 0x5d, 0x6f, 0x4c, 0xb9, 0x81, 0x96, 0x32, 0xfd, 0x40, 0x8d, 0x27, 0xc1,
                   0x78,
                   0x4f, 0x79, 0xc8, 0x0e, 0x8c, 0xe5, 0x9e, 0xae, 0xbf, 0xef, 0x42, 0xc5, 0xaf, 0xa0, 0xc2, 0xfa,
                   0xc7,
                   0xb6, 0xdb, 0x18, 0xc4, 0xa6, 0xfe, 0xe9, 0xf5, 0x6e, 0x64, 0x2f, 0xf1, 0x1b, 0xfb, 0xba, 0xa7,
                   0x37,
                   0x8f};
const int CMP[] = {0x9d, 0x71, 0xb8, 0xc8, 0x65, 0xfb, 0x87, 0x7f, 0x9a, 0x9c, 0xb1, 0xdf, 0x65, 0x8f, 0x9d, 0x39,
                   0x8f,
                   0x11, 0xf6, 0x8e, 0x65, 0x42, 0xda, 0xb4, 0x8c, 0x39, 0xfb, 0x99, 0x65, 0x48, 0x6a, 0xca, 0x63,
                   0xe7,
                   0xa4, 0x79, 0xff, 0xff, 0xff, 0xff};

void Judge()
{
    int len;
    int ok;
    int str_ori[9];
    int i, j;
    char ans[256];
    char str_in[256] = "0123456789012345678901234567890123456789";

    str_ori[0] = 0x80;
    str_ori[1] = 0x40;
    str_ori[2] = 0x20;
    str_ori[3] = 0x10;
    str_ori[4] = 8;
    str_ori[5] = 4;
    str_ori[6] = 2;
    str_ori[7] = 1;
//    memset(str_in, 0, 0x100);
    memset(ans, 0, 0x100);
//    FUN_004016a0(&DAT_00404118, 0xfc);
//    str_in = "0123456789012345678901234567890123456789";
    len = strlen(str_in);
    if (len != 40)
    {
        exit(0);
    }
    for (i = 0; i < 40; i += 8)
    {
        for (j = 0; j < 8; j += 1)
        {
            ans[i + j] = DAT[(((((int) str_in[i] & str_ori[j]) >>
                                                               (-j % 8)) |
                               (((int) str_in[i] & str_ori[j]) <<
                                                               (8U - (j % 8) &
                                                                0x1f)) |
                               (((int) str_in[i + 1] & str_ori[j]) >>
                                                                   (-(1 - j) % 8)) |
                               (((int) str_in[i + 1] & str_ori[j]) <<
                                                                   (8U - (-(1 - j) % 8))) |
                               (((int) str_in[i + 2] & str_ori[j]) >>
                                                                   (-(2 - j) % 8)) |
                               (((int) str_in[i + 2] & str_ori[j]) <<
                                                                   (8U - (-(2 - j) % 8))) |
                               (((int) str_in[i + 3] & str_ori[j]) >>
                                                                   ((3 - j) % 8)) |
                               (((int) str_in[i + 3] & str_ori[j]) <<
                                                                   (8U - (-(3 - j) % 8))) |
                               (((int) str_in[i + 4] & str_ori[j]) >>
                                                                   (-(4 - j) % 8)) |
                               (((int) str_in[i + 4] & str_ori[j]) <<
                                                                   (8U - (-(4 - j) % 8))) |
                               (((int) str_in[i + 5] & str_ori[j]) >>
                                                                   (-(5 - j) % 8)) |
                               (((int) str_in[i + 5] & str_ori[j]) <<
                                                                   (8U - (-(5 - j) % 8))) |
                               (((int) str_in[i + 6] & str_ori[j]) >>
                                                                   (-(6 - j) % 8)) |
                               (((int) str_in[i + 6] & str_ori[j]) <<
                                                                   (8U - (-(6 - j) % 8))) |
                               (((int) str_in[i + 7] & str_ori[j]) >>
                                                                   (-(7 - j) % 8)) |
                               (((int) str_in[i + 7] & str_ori[j]) <<
                                                                   (8U - (-(7 - j) % 8))))) % 99999999];
        }
    }
    ok = memcmp(CMP, ans, 40);
    cout << ans << endl;
    if (ok != 0)
    {
        puts("Wrong");
        exit(0);
    }
    puts("Congratulations");
    puts("flag is DASCTF{your input}");
}


int main()
{
    Judge();
    return 0;
}