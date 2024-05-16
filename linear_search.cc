#include <bits/stdc++.h>
using namespace std;
int linearSearch(vector<int> inp, int target, int n)
{
    for (int i = 0; i < n; i++)
    {
        // cout << inp[i];
        if (target == inp[i])
            return i + 1;
    }
    return -1;
}
main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> inp;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        inp.emplace_back(x);
    }
    int target;
    cout << "Enter an element to search: ";
    cin >> target;
    int isPresent = linearSearch(inp, target, n);
    cout << isPresent;
}