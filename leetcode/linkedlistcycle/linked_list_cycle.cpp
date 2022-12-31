#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        if (temp->val == INT_MAX)
        {
            return true;
        }
        temp->val = INT_MAX;
        temp = temp->next;
    }
    return false;
}

int main()
{
}