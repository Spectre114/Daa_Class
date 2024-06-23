#include <bits/stdc++.h>
using namespace std;
int MCM(int i, int j, vector<int> matrices, vector<vector<int>> dp)
{
    if (i == j)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    int mini = INT_MAX;
    for (int k = i; k < j; k++)
    {
        int steps = matrices[i - 1] * matrices[k] * matrices[j] + MCM(i, k, matrices, dp) + MCM(k + 1, j, matrices, dp);
        mini = min(mini, steps);
    }
    return dp[i][j] = mini;
}
int main()
{
    int n;
    cout << "Enter the number of matrices: ";
    cin >> n;
    vector<int> matrices(n + 1);
    // vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    for (int i = 0; i <= n; i++)
    {
        cin >> matrices[i];
    }
    // cout << MCM(1, n, matrices, dp);
    vector<vector<int>> tab(n + 1, vector<int>(n + 1, 0));
    for (int i = n; i >= 1; i--)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int mini = INT_MAX;
            for (int k = i; k < j; k++)
            {
                int steps = matrices[i - 1] * matrices[k] * matrices[j] + tab[i][k] + tab[k + 1][j];
                mini = min(mini, steps);
            }
            tab[i][j] = mini;
        }
    }
    cout << tab[1][n];
}