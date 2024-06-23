#include <bits/stdc++.h>
using namespace std;
int maxProfit(int i, vector<int> val, vector<int> weight, int maxW, vector<vector<int>> &dp)
{
    if (i == val.size() - 1)
    {
        if (maxW >= weight[i])
            return val[i];
        return 0;
    }
    if (dp[i][maxW] != -1)
        return dp[i][maxW];
    int notPick = 0 + maxProfit(i + 1, val, weight, maxW, dp);
    int pick = INT_MIN;
    if (maxW >= weight[i])
        pick = val[i] + maxProfit(i + 1, val, weight, maxW - weight[i], dp);
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
    // vector<vector<int>> memo(n, vector<int>(maxW + 1, -1));
    // cout << "Profit: " << maxProfit(0, val, weight, maxW, memo);
    vector<vector<int>> tab(n, vector<int>(maxW + 1, 0));
    for (int i = weight[0]; i <= maxW; i++)
    {
        tab[0][i] = val[0];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= maxW; j++)
        {
            int notPick = 0 + tab[i - 1][j];
            int pick = INT_MIN;
            if (j >= weight[i])
                pick = val[i] + tab[i - 1][j - weight[i]];
            tab[i][j] = max(pick, notPick);
        }
    }
    cout << tab[n - 1][maxW];
}