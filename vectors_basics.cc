// Vectors - Arrays whose size can be increased dynamically as per the requirement.
// push_back
// size
// pop_back
// sort
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> vec1; // vector<data_type> vector_name(size,val_to_fill)
    vector<int> vec2(n, 0);
    // for (int i = 0; i < vec2.size(); i++)
    //     cout << vec2[i];
    // push_back - to insert values in a vector.
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec1.push_back(x);
    }
    // for (int i = 0; i < vec1.size(); i++)
    //     cout << vec1[i];

    // auto - automatically assign suitable datatype to the iterator
    // sort(vec1.begin(), vec1.end());    // Ascending order by default, Time complexity - O(nlog(n));
    // reverse(vec1.begin(), vec1.end()); // reverse the vector
    sort(vec1.begin(), vec1.end(), [](int a, int b)
         { return a > b; }); // creating lambda function to sort in desired order
    for (auto it : vec1)
    {
        cout << it << " ";
    }
    // vec1.pop_back();
    // for (auto it : vec1)
    // {
    //     cout << it;
    // }
    // vec1.pop_back();
    // for (auto it : vec1)
    // {
    //     cout << it;
    // }
}