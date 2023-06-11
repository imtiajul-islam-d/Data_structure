#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    //     cout << v[i] << " ";
    // }
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    v.push_back(3);
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }
    return 0;
}