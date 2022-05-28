//
// Created by sfc9982 on 2022/5/28.
//

#include <algorithm>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>

using namespace std;

map<char, int> freq;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    const char dict[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    string s;
    cin >> s;

    for (char &i: s)
    {
        if (islower(i))
            freq[i]++;
    }
    for (char i: dict)
    {
        if (freq[i])
            cout << i << "  " << freq[i] << endl;
    }
    return 0;
}