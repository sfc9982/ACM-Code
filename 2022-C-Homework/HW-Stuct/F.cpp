//
// Created by sfc9982 on 2022/5/28.
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

struct node_st {
    int data;
    node_st *next;
};

void node_add(node_st *head, int data)
{
    auto *p = (node_st *) malloc(sizeof(node_st));
    p->data = data;
    p->next = head->next;
    head->next = p;
}

void node_remove(node_st *head, int num)
{
    int cnt = 1;
    auto *p = head;
    while (p->next != nullptr)
    {
        if (cnt == num)
        {
            auto *del = p->next;
            p->next = p->next->next;
            free(del);
            return;
        }
        p = p->next;
        cnt++;
    }
    cout << "Node not found!" << endl;
}

void list_travel(node_st *head)
{
    for (auto *p = head->next; p != nullptr; p = p->next)
    {
        cout << p->data << " ";
    }
    cout << endl;
}

void node_edit(node_st *head, int num, int data)
{
    int cnt = 1;
    auto *p = head;
    while (p->next != nullptr)
    {
        if (cnt == num)
        {
            p->data = data;
            return;
        }
        p = p->next;
        cnt++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    auto *head = (node_st *) malloc(sizeof(node_st));
    head->next = nullptr;
    int data;
    while (cin >> data && data > 0)
    {
        node_add(head, data);
    }
    int n, v;
    cin >> n >> v;
    node_edit(head, n + 1, v);
    list_travel(head);
    return 0;
}