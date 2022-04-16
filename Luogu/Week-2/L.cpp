//
// Created by sfc9982 on 2022/03/24.
//

#include <algorithm>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    function<int(void)> calc = [&calc]() -> int {
        int sum = 0;
        char x;
        while (cin >> x)
        {
            switch (x)
            {
                case '(':
                    sum += calc();
                    break;
                case 'a':
                    sum++;
                    break;
                case '|':
                    return max(sum, calc());
                case ')':
                    return sum;
                default:;
            }
        }
        return sum;
    };

    cout << calc() << endl;

    return 0;
}