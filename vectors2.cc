#include <bits/stdc++.h>
using namespace std;
main()
{
    vector<vector<int>> matrix; // vector<int,string,char,double,float>
    // push_back;
    // size - matrix.size() - no. of rows; matrix[0].size() - no. of columns
    int m = 3, n = 3;
    for (int i = 0; i < m; i++)
    {
        vector<int> inp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            inp.push_back(x);
        }
        matrix.push_back(inp);
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}