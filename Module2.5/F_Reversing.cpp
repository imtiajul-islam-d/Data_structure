#include <bits/stdc++.h>
using namespace std;
void reverce(int * ar) 
{
    reverce(ar);
    cout << * ar << " ";
};
int main()
{
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr.begin(), arr.end());
    for (int i : arr)
    {
        cout << i << " ";
    }
    
    return 0;
}