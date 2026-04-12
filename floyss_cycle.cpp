#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ent '\n'

class ListNode
{
    int val;
    ListNode *next = NULL;

public:
    ListNode *getNext()
    {
        return next;
    }
    void setNext(ListNode *x)
    {
        next = x;
    }
    int getVal()
    {
        return val;
    }
    void setVal(int x)
    {
        val = x;
    }
};

int findCycle(ListNode *head)
{
    ListNode *slow = head, *fast = head;
    bool isCycle = false;
    while (fast != NULL && fast->getNext() != NULL)
    {
        slow = slow->getNext();
        fast = fast->getNext()->getNext();
        if (slow == fast)
        {
            isCycle = true;
            break;
        }
    }
    if (isCycle)
    {
        slow = head;
        while (slow != fast)
        {
            slow = slow->getNext();
            fast = fast->getNext();
        }
        return slow->getVal();
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ListNode> v(8);
    for (int i = 0; i < 8; i++)
    {
        v[i].setVal(i + 1);
        if (i > 0)
        {
            v[i - 1].setNext(&v[i]);
        }
    }
    v[7].setNext(&v[2]);

    cout << findCycle(&v[0]) << ent;
    return 0;
}