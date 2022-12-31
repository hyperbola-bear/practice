#include "heap.h"
#include <bits/stdc++.h>

using namespace std;

vector<int> binary_heap{999999};

int getMax()
{
    return -1;
}

int getSize()
{
    return -1;
}

void insert(int element)
{
    binary_heap.push_back(element);
    int index = binary_heap.size() - 1;
    while (element > binary_heap[(index - 1) / 2] || index == 1)
    {
        int temp = binary_heap[(index - 1) / 2];
        binary_heap[(index - 1) / 2] = element;
        binary_heap[index] = temp;
        index = (index - 1) / 2;
    }
}

void removeMax()
{
}