#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; // step: O(1)
    cin >> n; // step: O(1)
    int a[n];
    for (int i = 0; i < n; i++) // step: O(n)
    {
        cin >> a[i];
    }
    int s = 0; // step: O(1)
    for (int i = 0; i < n; i++) // step: O(n)
    {
        s+= a[i];
    }
    cout << s << endl; // step: O(1)
    return 0;
}
// The time complexity is O(n) here. I have to take the worst case for the complexity, so in between O(n) and O(n), both are same here.
// Or I can add these two O(n) here, then they will be O(2n), so time complexity rule says, this constant value does not matter to this compiler, they will be subtracted from here. Then the result will be O(n) here.
// O of N complexity or linear complexity
