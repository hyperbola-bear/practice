#include <bits/stdc++.h>

using namespace std;

struct Person
{
    string name;
    int pos;
    struct Person *front;
    struct Person *back;
    struct Person *partner;
};

int main()
{
    int num_of_pairs{0}, num_of_actions{0};
    cin >> num_of_pairs >> num_of_actions;
    vector<Person> people;
    for (int i = 0; i < num_of_pairs * 2; i += 2)
    {
        string a, b;
        cin >> a >> b;
        people.push_back({a, i, nullptr, nullptr});
        people.push_back({b, i + 1, nullptr, nullptr});
    }
    for (auto &person : people)
    {
        if (person.pos % 2 == 0)
        {
            person.partner = &people[person.pos + 1];
        }
        else
        {
            person.partner = &people[person.pos - 1];
        }
        if (person.pos > 0)
        {
            person.front = &people[person.pos - 1];
        }
        else
        {
            person.front = nullptr;
        }
        if (person.pos < people.size() - 1)
        {
            person.back = &people[person.pos + 1];
        }
        else
        {
            person.back = nullptr;
        }
        // cout << person.name << " " << person.pos << " " << &person << " " << person.partner->name << " " << person.front << " " << person.back << endl;
    }

    Person *head = &people[0];
    Person *mic = &people[0];
    Person *tail = &people[num_of_pairs * 2 - 1];
    string actions;
    cin >> actions;
    for (auto &action : actions)
    {
        // cout << "head: " << head->name << " tail: " << tail->name << endl;
        // cout << "action: " << action << " " << endl;
        switch (action)
        {
            {
            case 'F':
                mic = mic->front;
                break;
            case 'B':

                mic = mic->back;
                break;
            case 'R':

                if (mic->back != nullptr)
                {
                    if (head == mic)
                    {
                        head = mic->back;
                        tail->back = mic;
                        mic->front = tail;
                        mic = head;
                        tail = tail->back;
                        tail->back = nullptr;
                    }
                    else
                    {

                        mic->front->back = mic->back;
                        mic->back->front = mic->front;
                        tail->back = mic;
                        mic->front = tail;
                        tail = mic;
                        mic = mic->back;
                        tail->back = nullptr;
                    }
                }
                else
                {
                    mic = head;
                }
                break;
            case 'C':

                if (mic->back != nullptr)
                {

                    if (head == mic)
                    {
                        if (mic->partner == tail)
                        {
                            head = mic->back;
                            tail->back = mic;
                            mic->front = tail;
                            mic = head;
                            tail = tail->back;
                            tail->back = nullptr;
                        }
                        else
                        {

                            mic->partner->back->front = mic;
                            mic->front = mic->partner;
                            head = mic->back;
                            mic->back = mic->partner->back;
                            mic->partner->back = mic;
                            mic = head;
                            head->front = nullptr;
                        }
                    }
                    else
                    {
                        if (mic->partner == tail)
                        {
                            mic->front->back = mic->back;
                            mic->back->front = mic->front;
                            tail->back = mic;
                            mic->front = tail;
                            tail = mic;
                            mic = mic->back;
                            tail->back = nullptr;
                        }
                        else
                        {

                            mic->front->back = mic->back;
                            mic->back->front = mic->front;
                            mic->front = mic->partner;
                            mic->partner->back->front = mic;
                            Person *temp = mic;
                            mic = mic->back;
                            temp->back = temp->partner->back;
                            temp->partner->back = temp;
                        }
                    }
                }
                else
                {
                    mic->partner->back->front = mic;
                    mic->back = mic->partner->back;
                    mic->partner->back = mic;
                    mic->front = mic->partner;
                    mic = head;
                }
                break;
            case 'P':
                cout << mic->partner->name << endl;
                break;
            }
        }
        // Person *temp = head;
        // while (head != nullptr)
        // {
        //     cout << head->name << endl;
        //     head = head->back;
        // }
        // head = temp;

        // cout << "mic: " << mic->name << endl;
    }
    cout << endl;
    while (head != nullptr)
    {
        cout << head->name << endl;
        head = head->back;
    }
}