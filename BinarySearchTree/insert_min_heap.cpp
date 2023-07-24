#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> & heap, int x)
{
    heap.push_back(x);
    int current_idx = heap.size() - 1;
    while(current_idx != 0)
    {
        int parent_idx = (current_idx - 1) / 2;
        if(heap[current_idx] > heap[parent_idx])
        {
            swap(heap[parent_idx], heap[current_idx]);
            current_idx = parent_idx;
        }
        else break;
    }
}
int main()
{
    vector<int> heap;
    int n; cin >> n;
    for(int i = 0; i<n; i++)
    {
        int x; cin >>x;
        insert_heap(heap, x);
    }
    for(int v:heap)
    {
        cout << v << " ";
    }
    return 0;
}   