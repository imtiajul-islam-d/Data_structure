#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < q; i++)
    {
        int flag = 0, sn;
        cin >> sn;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid_index = (l + r) / 2;
            if (a[mid_index] == sn)
            {
                flag = 1;
                break;
            }

            if (a[mid_index] > sn)
            {
                r = mid_index - 1;
            }
            else
            {
                l = mid_index + 1;
            }
        }
        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}