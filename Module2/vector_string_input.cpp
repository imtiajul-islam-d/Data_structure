#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        string si;
        cin >> si;
        s.push_back(si);
    }
    for (string st:s)
    {
        cout << st << endl;
    }
    
    
    return 0;
}