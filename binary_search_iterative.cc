// Time Complexity - O(logn)
// Space Complexity - O(1)
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int low, int high, vector<int> inp, int target)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (inp[mid] == target)
            return true;
        else if (target > inp[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
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
    int isPresent = binarySearch(0, n - 1, inp, target);
    cout << isPresent;
}