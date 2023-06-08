#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout << v.max_size() << endl;
    cout << v.capacity() << endl;
    v.push_back(10);
    v.clear();
    v.resize(1, 4);
    cout << v.capacity() << endl;
    return 0;
}