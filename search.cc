#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter size";
    cin >> n;
    int flag = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int z;
    cout << "enter elemnt to search";
    cin >> z;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == z)
        {
            cout << "element found" << i + 1;
            break;
        }
        }
    cout << "Element not found";
}