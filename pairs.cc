#include <bits/stdc++.h>
using namespace std;
main()
{
    // pair<int, char> pr; // pair<first_data_type,second_data_type.
    // pr = {1, 'a'};
    // cout << pr.first << " " << pr.second;
    // vector<pair<int, char>> vp;
    // for (int i = 0; i < 3; i++)
    // {
    //     int x;
    //     char y;
    //     cin >> x >> y;
    //     vp.push_back({x, y});
    // }
    // for (auto it : vp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    pair<int, pair<int, int>> pr2;
    pr2 = {1, {2, 3}};
    cout << pr2.first << " " << pr2.second.first << " " << pr2.second.second;
}