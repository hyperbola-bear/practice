
ListNode *reverseList(ListNode *head)
{
    ListNode *prev, *nextNode = NULL;
    while (head->next != NULL)
    {
        nextNode = head->next;
        prev = head;
        head = head->next;
        nextNode->next = prev;
    }
    return head;
}

ListNode *reverseList(ListNode *head)
{
    ListNode *nextNode, *prevNode = NULL;
    while (head)
    {
        nextNode = head->next;
        head->next = prevNode;
        prevNode = head;
        head = nextNode;
    }
    return prevNode;
}

ListNode *reverseList(ListNode *head)
{
    ListNode *nextNode, *prevNode = NULL;
    while (head)
    {
        nextNode = head->next;
        head->next = prevNode;
        prevNode = head;
        head = nextNode;
    }
    return prevNode;
}