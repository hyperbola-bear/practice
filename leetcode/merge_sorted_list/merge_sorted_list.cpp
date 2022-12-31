#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int main()
{
    ListNode *list1 = new ListNode(1, new ListNode(2, new ListNode(4)));
    ListNode *list2 = new ListNode(1, new ListNode(3, new ListNode(4)));
    ListNode *L3 = new ListNode(0);
    auto i = list1;
    auto j = list2;
    while (!(i == nullptr && j == nullptr))
    {

        if (i == nullptr)
        {
            while (j != nullptr)
            {
                L3->next = new ListNode(j->val);
                L3 = L3->next;
                j = j->next;
            }
            return L3->next;
        }
        else if (j == nullptr)
        {
            while (i != nullptr)
            {
                L3->next = new ListNode(i->val);
                L3 = L3->next;
                i = i->next;
            }
            return L3->next;
        }

        if (i->val < j->val)
        {
            L3->next = new ListNode(i->val);
            L3 = L3->next;
            i = i->next;
        }
        else
        {
            L3->next = new ListNode(j->val);
            L3 = L3->next;
            j = j->next;
        }
    }
    return L3->next;

    for (auto i = L3->next; i != nullptr; i = i->next)
    {
        cout << i->val << " ";
    }

    // cout << list1->next->val << endl;
    //  cout << (*(*list1).next).val << endl;
}