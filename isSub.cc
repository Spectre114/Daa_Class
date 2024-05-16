#include <bits/stdc++.h>
using namespace std;
bool checkSub(string str, string sub)
{
    int n = str.size();
    int m = sub.size();
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (str[i] == sub[j])
        {
            i++;
            j++;
        }
        else
            i++;
    }
    return j == m;
}
int main()
{
    string str, sub;
    cout << "Enter the string and subsequence to check: ";
    cin >> str >> sub;

    cout << (checkSub(str, sub) ? "Yes" : "No");
}