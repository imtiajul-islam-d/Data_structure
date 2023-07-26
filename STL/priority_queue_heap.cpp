// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     priority_queue<int> pq;
//     while (true)
//     {
//         int c; cin >> c;
//         if(c == 0)
//         {
//             int v; cin >> v;
//             pq.push(v);
//         }
//         else if(c == 1)
//         {
//             pq.pop();
//         }
//         else if(c == 2)
//         {
//             cout << pq.top() << " ";
//         }
//         else break;
//     }
//     return 0;
// }  
// min heap
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // it is mainly heap data structure
    // which will keep track the largest value at the top
    priority_queue<int, vector<int>, greater<int>> pq;
    while (true)
    {
        int c; cin >> c;
        if(c == 0)
        {
            int v; cin >> v;
            pq.push(v);
        }
        else if(c == 1)
        {
            pq.pop();
        }
        else if(c == 2)
        {
            cout << pq.top() << " ";
        }
        else break;
    }
    return 0;
}   