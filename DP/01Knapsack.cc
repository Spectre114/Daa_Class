#include <bits/stdc++.h>
using namespace std;
int maxProfit(int i, int j, vector<int> val, vector<int> weight, int maxW, vector<vector<int>> &dp)
{
    if (i == val.size() - 1)
    {
        if (maxW >= weight[j])
            return val[i];
        return 0;
    }
    if (dp[i][maxW] != -1)
        return dp[i][maxW];
    int notPick = 0 + maxProfit(i + 1, j + 1, val, weight, maxW, dp);
    int pick = INT_MIN;
    if (maxW >= weight[j])
        pick = val[i] + maxProfit(i + 1, j + 1, val, weight, maxW - weight[j], dp);
    return dp[i][maxW] = max(pick, notPick);
}
int main()
{
    int n;
    cout << "Enter the number of items: ";
    cin >> n;
    vector<int> val(n), weight(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value and its weight: ";
        cin >> val[i] >> weight[i];
    }
    int maxW;
    cout << "Enter the max weight: ";
    cin >> maxW;
    vector<vector<int>> dp(n, vector<int>(maxW + 1, -1));
    cout << "Profit: " << maxProfit(0, 0, val, weight, maxW, dp);
}