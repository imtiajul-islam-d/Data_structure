#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> heap;
    int n; cin>>n;
    for(int i = 0; i<n; i++)
    {
        int x; cin >> x;
    heap.push_back(x);
    int current_idx = heap.size() - 1;
    while(current_idx != 0 )
    {
        int parent_idx = (current_idx - 1) / 2;
        if(heap[current_idx] > heap[parent_idx])
        {
            swap(heap[current_idx], heap[parent_idx]);
            current_idx = parent_idx;
        }
        else break;
    }
    }
    for(int v:heap)
    {
        cout << v << " ";
    }
    return 0;
}   