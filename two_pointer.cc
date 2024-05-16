#include <bits/stdc++.h>
using namespace std;
main()
{
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        nums.push_back(x);
    }
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        if (nums[j] % 2 == 0)
        {
            swap(nums[i], nums[j]);
            i++;
            j++;
            continue;
        }
        j++;
    }
    for (auto it : nums)
        cout << it << " ";
}