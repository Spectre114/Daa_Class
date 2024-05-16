#include <bits/stdc++.h>
using namespace std;
int linearSearch(int i, vector<int> inp, int target, int n)
{
    if (i == n)
        return false;
    if (target == inp[i])
        return true;
    return linearSearch(i + 1, inp, target, n);
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
    int isPresent = linearSearch(0, inp, target, n);
    cout << isPresent;
}