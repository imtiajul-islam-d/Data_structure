#include <bits/stdc++.h>
using namespace std;
int main()
{
    // it is a hashing stl
    // it will keep any value as pair
    // example : {"emi"= 3}
    // emi is a address here
    // mp["Emi"] = 10;
    // mp["Emi"] = 20;
    // *** It will rewrite the value of "Emi"
    // *** mp.count will be highest "1"
    // TO find a value search by count()
    map<string, int> mp;
    // mp.insert({"Emi", 10});
    // mp.insert({"Esat", 20});
    // mp.insert({"Emon", 30});
    mp["Emi"] = 10; // O(logN)
    mp["Esat"] = 20;
    mp["Emon"] = 30;
    mp["Esa"] = 20;
    mp["Emo"] = 30;

    // if(mp.count("Emon"))
    // {
    //     cout << mp.count("Emi");
    // }
    for(auto it = mp.begin(); it!= mp.end(); it++)
    {
        cout << it->first << it->second << endl; // O(logN)
    }
    cout << mp["Emi"];
    return 0;
}   