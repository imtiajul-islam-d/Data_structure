#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i: arr)
    {
        if(i < 0)
        {
            cout << 2 << " ";
        }
        if(i == 0)
        {
            cout << i << " ";
        }
        if(i > 0)
        {
            cout << 1 << " ";
        }
    }
    
    
    return 0;
}