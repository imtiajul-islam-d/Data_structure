#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int input;
    string str;
    cin >> str;
    vector<int> count(26, 0);
    for (int i = 0; i < str.size(); i++)
    {
        int n = str[i] - 'a';
        count[n]++;
    }
    for (int i = 0; i < 26; i++)
    {
        // if (count[i] != 0)
        // {
        //     char cr = i + 'a';
        //     int cou = count[i];
        //     cout << cr << " : " << cou;
        // }
        char cr = i + 'a';
        int cou = count[i];
        cout << cr << " : " << cou;
        cout << endl;
    }
    return 0;
}