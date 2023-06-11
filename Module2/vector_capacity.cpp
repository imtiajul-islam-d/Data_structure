#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // cout << v.max_size() << endl;
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // v.clear();
    // v.resize(1, 4);
    // vector<int> v= {1,2,3,4};
    // replace(v.begin(), v.end(), 2, 10);
    // for (int i:v)
    // {
    //     cout << i << endl;
    // }

    // cout << v.capacity() << endl;
    // vector<int> v= {1,7,3,4};
    // vector<int>:: iterator findingPointer;
    // auto findingPointer = find(v.begin(), v.end(), 3);
    // cout <<  * findingPointer;
    // cout << v[v.size() - 1];
    // cout << v.back();
    // cout << v[0];
    // cout << v.front();  // it will take more time than 25 no line
    vector<int> v = {1, 7, 3, 4};
    // vector<int>::iterator findingPointer;
    for (auto findingPointer = v.begin(); findingPointer < v.end(); findingPointer++)
    {
        cout << * findingPointer << " ";
    }
    
    return 0;
}