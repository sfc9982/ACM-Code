#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    string flag   = "ISCC{012345678901}";
    int    key[4] = {'I', 'S', 'C', 'C'};
    int    n      = 18;
    //    int flagI[18];
    //    for (int i = 0; i < n; ++i)
    //        flagI[i] = flag[i];

    int rounds  = 52 / n + 6; // 8
    int static1 = 0;          // 固定变化值

    int flagI[18] = {
            -1538871358,
            1333449457,
            -1895537557,
            2071530666,
            717620825,
            1905233031,
            1251043066,
            -631646493,
            370121592,
            -1426700165,
            -1976530090,
            1926632482,
            1166190964,
            1582436721,
            1063150559,
            377133855,
            223575465,
            259084339};


    rounds  = 52 / n + 6; // 8
    static1 = rounds * -0x61C88647;

    int y = flagI[0];
    for (; rounds--;) {
        int static2 = (static1 >> 2) & 3; // 固定值

        for (int i = n - 1; i >= 0; i--) {
            int z = flagI[(i + n - 1) % n];
            flagI[i] -= ((y ^ static1) + (z ^ key[static2 ^ (i & 3)])) ^ (((4 * y) ^ (z >> 5)) + ((y >> 3) ^ (16 * z)));
            y = flagI[i];
        }

        static1 += 0x61C88647; // 固定值
    }
    for (int i = 0; i < n; i++)
        cout << flagI[i] << " ";
    cout << endl;
    for (int i = 0; i < n; ++i)
        cout << (char) flagI[i];
    cout << endl;
    return 0;
}