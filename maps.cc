#include <bits/stdc++.h>
using namespace std;
main()
{
    map<int, char> mp; // map<first_data_type,second_data_type> - always sorted
    map<int, pair<int, int>> mp2;
    map<int, vector<int>> mv;
    unordered_map<int, char> mp2; // not sorted, everything same as map.
    mp[1] = 'a';
    mp[2] = 'b';
    mp[3] = 'c';
    // cout << mp[1] << " " << mp[2] << " " << mp[3];
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
}