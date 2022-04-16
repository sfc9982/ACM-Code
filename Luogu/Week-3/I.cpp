//
// Created by sfc9982 on 2022/03/31.
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

int o = 1;
int heap[1000050];

inline void up(int p)
{
    if (heap[p] < heap[p >> 1])
    {
        swap(heap[p], heap[p >> 1]);
        up(p >> 1);
    }
    return;
}

inline void down(int p)
{
    int s = p << 1;
    if (heap[s] < heap[p] || s + 1 > o)
    {
        if (heap[s] < heap[s + 1] && s + 1 <= o)
        {
            swap(heap[s], heap[p]);
            down(s);
        }
    }
    if (heap[s + 1] < heap[p] && s + 1 <= o)
    {
        swap(heap[s + 1], heap[p]);
        down(s + 1);
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, a, b;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a == 1)
            cin >> b;
        if (a == 1)
        {
            heap[o] = b;
            up(o);
            o++;
        }
        if (a == 2)
        {
            cout << heap[1] << endl;
        }
        if (a == 3)
        {
            o--;
            heap[1] = heap[o];
            down(1);
        }
    }
    return 0;
}