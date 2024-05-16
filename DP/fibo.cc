#include <bits/stdc++.h>
using namespace std;
int fibo(int n, vector<int> &dp)
{
    if (n == 0 || n == 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
}
int main()
{
    int n;
    cout << "Enter the value: ";
    cin >> n;
    vector<int> dp(n + 1, -1);
    // cout << fibo(n, dp);
    dp[0] = 0;
    dp[1] = 1;
    long long a = 0;
    long long b = 1;
    long long c;
    for (int i = 2; i <= n; i++)
    {
        // dp[i] = dp[i - 1] + dp[i - 2];
        c = a + b;
        a = b;
        b = c;
    }
    cout << b;
}