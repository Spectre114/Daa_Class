// count frequency of no in vector using map
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout << "enter size";
    cin >> n;
    vector<int> v; // 1,2,2,4,5
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    map<int, int> mp;
    for (auto it : v)
    {
        mp[it]++;
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     mp[v[i]]++;
    // }
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
}