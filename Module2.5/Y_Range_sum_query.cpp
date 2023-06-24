#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> total_sum(n);
    for (int i = 0; i < n; i++)
    {
        total_sum[0] = a[0];
        if (i > 0)
        {
            total_sum[i] = total_sum[i - 1] + a[i];
        }
    }
    for (int i = 0; i < q; i++)
    {
        long long l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == 0)
            cout << total_sum[r] << endl;
        if (l != 0)
            cout << total_sum[r] - total_sum[l - 1] << endl;
    }

    return 0;
}