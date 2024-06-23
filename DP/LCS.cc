#include <bits/stdc++.h>
using namespace std;
// Memoization
int lcs(int i, int j, string str1, string str2, vector<vector<int>> &dp)
{
    if (str1[i] == str1.size() || str2[j] == str1.size())
    {
        return 0;
    }
    if (dp[i][j] != -1)
        return dp[i][j];
    if (str1[i] == str2[j])
    {
        return dp[i][j] = 1 + lcs(i + 1, j + 1, str1, str2, dp);
    }
    return dp[i][j] = max(lcs(i + 1, j, str1, str2, dp), lcs(i, j + 1, str1, str2, dp));
}
int main()
{
    string str1, str2;
    cout << "enter the first string " << endl;
    cin >> str1;
    cout << "enter the second string" << endl;
    cin >> str2;
    int n = str1.size();
    int m = str2.size();
    // vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    // cout << "lenght of common subsequence" << lcs(0, 0, str1, str2, dp);

    // Tabulation with Space Optimization O(m*n) -> O(m + n)
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    vector<int> prev(m + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        vector<int> cur(m + 1, 0);
        for (int j = 1; j <= m; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                cur[j] = 1 + prev[j - 1];
            }
            else
                cur[j] = max(cur[j - 1], prev[j]);
        }
        prev = cur;
    }
    cout << "lenght of common subsequence: " << prev[m];
}
