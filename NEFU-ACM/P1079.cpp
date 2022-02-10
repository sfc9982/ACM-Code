//
// Created by sfc9982 on 2021/12/3.
//

#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

const int day[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int y, m, d;

int main()
{
    bool leap;
    while (cin >> y >> m)
    {
        leap = false;
        if ((y % 100 && !(y % 4)) || !(y % 400))
            leap = true;
        cout << day[(int) leap][m] << endl;
    }
    return 0;
}