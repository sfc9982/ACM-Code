//
// Created by sfc9982 on 2022/02/08.
//

#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
#include <functional>

using namespace std;

//struct men {
//    int face;
//    int money;
//    int id;
//} man[4];
//
//bool cmp(men a, men b)
//{
//    if (a.face == b.face)
//        return a.money > b.money;
//    return a.face > b.face;
//}

int main()
{
    int a[] = {1, 3, 3, 5, 7, 9};

    cout << lower_bound(begin(a), end(a), 3, less<int>()) - a << endl;
    cout << upper_bound(begin(a), end(a), 3, less<int>()) - a << endl;
    for (int i = 0; i < 5; ++i)
        cout << a[i] << " ";
//    man[1].face = 100, man[1].money = 100, man[1].id = 1;
//    man[2].face = 100, man[2].money = 250, man[2].id = 2;
//    man[3].face = 10000, man[3].money = 0, man[3].id = 3;
//    sort(man + 1, man + 4, cmp);
//    for (int i = 1; i <= 3; ++i)
//        cout << man[i].id << endl;
    return 0;
}
