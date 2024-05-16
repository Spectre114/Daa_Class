#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter size of both the arrays" << endl;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cout << "enter profit and weight" << endl;
        int profit;
        int weight;
        cin >> profit >> weight;
        v.push_back({profit, weight});
    }
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b)
         { return (a.first / a.second) > (b.first / b.second); });
    int container;
    cout << "enter container weight" << endl;
    cin >> container;
    int totalProfit = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (container >= v[i].second)
        {
            container = container - v[i].second;
            totalProfit = totalProfit + v[i].first;
        }
        else
        {
            totalProfit += (v[i].first / v[i].second) * container;
            container = 0;
            break;
        }
    }
    cout << "Total Profit: " << totalProfit;
}