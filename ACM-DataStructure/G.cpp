//
// Created by sfc9982 on 2022/02/10.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;

int cd, n, heap[10000];

namespace sfc9982 {
    void push_heap(int d)
    {
        int now, next;
        heap[++cd] = d;
        now = cd;
        while (now > 1)
        {
            next = now >> 1;
            if (heap[now] >= heap[next])
                return;
            swap(heap[now], heap[next]);
            now = next;
        }
    }

    int heap_top()
    {
        int now, next, res;
        res = heap[1];
        heap[1] = heap[cd--];
        now = 1;
        while (now * 2 <= cd)
        {
            next = now * 2;
            if (next < cd && heap[next + 1] < heap[next])
                next++;
            if (heap[now] <= heap[next])
                return res;
            swap(heap[now], heap[next]);
            now = next;
        }
        return res;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int i, x, y, ans = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        sfc9982::push_heap(x);
    }
    for (i = 1; i < n; i++)
    {
        x = sfc9982::heap_top();
        y = sfc9982::heap_top();
        ans += x + y;
        sfc9982::push_heap(x + y);
    }
    cout << ans << endl;

    return 0;
}
