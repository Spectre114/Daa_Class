#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cout << "Enter the number of jobs: ";
    cin >> n;
    vector<pair<int, int>> activity;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter start and end time for activity " << i + 1 << ": " << endl;
        int start, end;
        cin >> start >> end;
        activity.push_back({start, end});
    }
    sort(
        activity.begin(), activity.end(), [](pair<int, int> a, pair<int, int> b)
        { return a.second < b.second; });
    int canTake = activity[0].second;
    int maxJobs = 1;
    cout << 1 << " ";
    for (int i = 1; i < activity.size(); i++)
    {
        if (activity[i].first >= canTake)
        {
            cout << i + 1 << " ";
            maxJobs++;
            canTake = activity[i].second;
        }
    }
    cout << "Maximum jobs can be take: " << maxJobs << endl;
}