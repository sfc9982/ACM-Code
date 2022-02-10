//
// Created by sfc9982 on 2021/12/11.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;


int factors(int x)
{
    int y = x / 2;
    for (int i = 2; i <= y; i++)
        if (x % i == 0)
        {
            cout << "Factor:" << i << endl;
            factors(x / i);
            break;
        } else
        {
            cout << "Prime Factor:" << x << endl;
        }
    cout << "参数x:" << x << " 参数y:" << y << endl;
    return 0;

}

int main()
{
    factors(18);
    return 0;
}