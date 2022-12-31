
#include <bits/stdc++.h>

using namespace std;

// Making a node struct containing a data int and a pointer
// to another node
// struct Node
// {
//     string data;
//     Node *next;
// };

// class LinkedList
// {
//     // Head pointer
//     Node *head;
//     Node *tail;

// public:
//     // default constructor. Initializing head pointer
//     LinkedList()
//     {
//         head = NULL;
//         tail = NULL;
//     }

//     // inserting elements (At start of the list)
//     void insert_head(string val)
//     {
//         // make a new node
//         Node *new_node = new Node;
//         new_node->data = val;
//         new_node->next = NULL;

//         // If list is empty, make the new node, the head
//         if (head == NULL)
//         {

//             head = new_node;
//             tail = new_node;
//         }
//         // else, make the new_node the head and its next, the previous
//         // head
//         else
//         {
//             new_node->next = head;
//             head = new_node;
//         }
//     }

//     void insert_tail(string val)
//     {
//         // make a new node
//         Node *new_node = new Node;
//         new_node->data = val;
//         new_node->next = NULL;

//         // If list is empty, make the new node, the head
//         if (head == NULL)
//         {

//             head = new_node;
//             tail = new_node;
//         }
//         // else, make the new_node the head and its next, the previous
//         // head
//         else
//         {
//             tail->next = new_node;
//             tail = new_node;
//         }
//     }

//     void insert(int pos, string val)
//     {
//         if (pos == 0)
//         {
//             insert_head(val);
//             return;
//         }

//         Node *temp = head;
//         Node *new_node = new Node;
//         new_node->data = val;
//         for (int i = 0; i < pos - 1; i++)
//         {
//             temp = temp->next;
//             if (temp == NULL)
//             {
//                 cout << "Invalid position" << endl;
//                 return;
//             }
//         }
//         new_node->next = temp->next;
//         temp->next = new_node;
//     }

//     string search_pos(int pos)
//     {
//         Node *temp = head;
//         int count = 0;
//         while (temp != NULL)
//         {
//             if (count == pos)
//             {
//                 return temp->data;
//             }
//             count++;
//             temp = temp->next;
//         }
//         return "Invalid position";
//     }

//     void remove(int pos)
//     {
//         Node *temp = head;
//         if (pos == 0)
//         {
//             head = temp->next;
//             delete temp;
//             return;
//         }
//         while (pos != 0)
//         {
//             Node *prev = temp;
//             temp = temp->next;
//             pos--;
//             if (pos == 0)
//             {
//                 if (temp == tail)
//                 {
//                     tail = prev;
//                     delete temp;
//                     return;
//                 }
//                 prev->next = temp->next;
//                 delete temp;
//                 return;
//             }
//             if (temp == NULL)
//             {
//                 cout << "Invalid position" << endl;
//                 return;
//             }
//         }
//     }

//     void display(int pos = 0)
//     {
//         if (pos == 0)
//         {

//             Node *temp = head;
//             while (temp != NULL)
//             {
//                 cout << temp->data << " ";
//                 temp = temp->next;
//             }
//             cout << endl;
//             return;
//         }
//         else
//         {
//             Node *temp = head;
//             int count = 1;
//             while (temp != NULL)
//             {
//                 if (count == pos)
//                 {
//                     cout << temp->data << endl;
//                     return;
//                 }
//                 count++;
//                 temp = temp->next;
//             }
//         }
//     }
// };

int main()
{
    int N;
    cin >> N;
    vector<list<string>> S(N);

    for (int i = 0; i < N; i++)
    {
        string Si;
        cin >> Si;
        S[i].push_back(Si);
    }

    int a = 0, b;
    for (int i = 0; i < N - 1; i++)
    {
        cin >> a >> b;
        --a;
        --b;
        S[a].splice(S[a].end(), S[b]);
    }

    for (auto &si : S[a])
    {
        cout << si;
    }
    cout << "\n";
    return 0;
}