//
// Created by sfc9982 on 2022/5/18.
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

void node_append(node_st *head, int data)
{
    auto *p = head;
    while (p->next != nullptr)
        p = p->next;
    auto *add = (node_st *) malloc(sizeof(node_st));
    add->data = data;
    add->next = nullptr;
    p->next = add;
}

void node_remove(node_st *head)
{
    free(head->next);
    head->next = head->next->next;
}

void list_travel(node_st *head)
{
    for (auto *p = head->next; p != nullptr; p = p->next)
    {
        cout << p->data << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    auto head = (node_st *) malloc(sizeof(node_st));
    head->next = nullptr;
    for (int i = 0; i < 5; ++i)
    {
        node_append(head, i);
    }
    list_travel(head);
    return 0;
}