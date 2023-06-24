#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 'X';
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            int mid = n / 2;
            for (int j = 0; j < n; j++)
            {
                if (i == mid)
                {
                    if (j == mid)
                        cout << 'X';
                    else
                        cout << " ";
                }
                else
                {
                    if (i < mid)
                    {
                        // x er age
                        if (j == i)
                        {
                            cout << '\\';
                        }
                        if (j == (n - 2) - i)
                        {
                            cout << '/';
                        }
                        if (j != i || j != (n - 1) - i)
                            cout << " ";
                    }
                    else
                    {
                        // x er pore
                        int l, r;
                        l = mid - (i - mid);
                        r = mid + ((i - mid) - 1);
                        if (j == l)
                        {
                            cout << '/';
                        }
                        if (j == r )
                        {
                            cout << '\\';
                        }
                        if (j != l  || j != r)
                            cout << " ";
                    }
                }
            }
            cout << endl;
        }
    }

    return 0;
}