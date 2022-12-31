#include <bits/stdc++.h>

using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool isPalindrome(ListNode *head)
{
    int count{0};
    stack<int> s;
    ListNode *temp = head;
    while (head != NULL)
    {
        cout << "push: " << head->val << endl;
        s.push(head->val);
        head = head->next;
        count++;
    }

    int half = count / 2;
    count = 0;
    while (count != half)
    {
        cout << "compare: " << s.top() << " " << temp->val << endl;
        if (s.top() != temp->val)
        {
            return false;
        }
        temp = temp->next;
        s.pop();
        count++;
    }
    return true;
};

int main()
{
    ListNode *head = new ListNode(1);
    ListNode *temp = head;
    head->next = new ListNode(2);
    head = head->next;
    head->next = new ListNode(2);
    head = head->next;
    head->next = new ListNode(1);
    head = temp;

    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
    bool result = isPalindrome(temp);
    cout << boolalpha << result << endl;
}