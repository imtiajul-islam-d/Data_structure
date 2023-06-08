#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector <int> v; //type one
    // vector<int> v={3, 4, 5};
    // vector<int> v(5);
    // vector<int> v2(5, 10);
    // vector<int> v(v2);
    int a[6] = {1, 2, 3, 4, 5, 6};
    vector<int> v(a, a+4);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}