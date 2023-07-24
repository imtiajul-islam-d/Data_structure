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
void delete_heap(vector<int> & heap)
{
    int sz = heap.size();
    if(sz == 0) return;
    int last_idx = heap.size() - 1;
    int last_val = heap[last_idx];
    heap.pop_back();
    heap[0] = last_val;
    int current_idx = 0;
    while(true)
    {
        int l = (current_idx*2) + 1;
        int r = (current_idx*2) + 2;
        if(l <= last_idx && r <= last_idx)
        {
            if(heap[l] >= heap[r] && heap[current_idx] < heap[l])
            {
                swap(heap[current_idx], heap[l]);
                current_idx = l;
            }
            else if(heap[r] > heap[l] && heap[current_idx] < heap[r])
            {
                swap(heap[current_idx], heap[r]);
                current_idx = r;
            }
            else break;
        }
        else if(l <= last_idx)
        {
            if(heap[current_idx] < heap[l])
            {
                swap(heap[current_idx], heap[l]);
                current_idx = l;
            }
            else break;
        }
        else if(r <= last_idx)
        {
            if(heap[current_idx] < heap[r])
            {
                swap(heap[current_idx], heap[r]);
                current_idx = r;
            }
            else break;
        }
        else
        {
            break;
        }
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
    delete_heap(heap);
    cout << endl;
    for(int v:heap)
    {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}   