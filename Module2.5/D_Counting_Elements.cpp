#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i : arr)
    {
        auto res = find(arr.begin(), arr.end(), i + 1);
        if (*res == i + 1)
            count++;
    }
    cout << count;
    return 0;
}