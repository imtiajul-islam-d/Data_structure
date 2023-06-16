#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    vector<int> result(v2);
    for (int i = 0; i < n; i++)
    {
        result.push_back(v1[i]);
    }
    for (int i : result)
    {
        cout << i << " ";
    }
    return 0;
}