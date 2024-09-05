#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeinterval(vector<vector<int>> &arr, int n, int m)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (ans.empty() || ans.back()[1] < arr[i][0])
        {
            ans.push_back(arr[i]);
        }
        else
        {
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }
    return ans;
}

int main()
{
    int n, m;

    cout << "Enter the n and m vlaue : ";
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Merge Intervals question

    vector<vector<int>> ans = mergeinterval(arr, n, m);

    cout << " Array elemrnts are :";
    for (int i = 0; i < n; i++)
    {
        cout << "[";
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "],";
    }

    cout << "\nArray elemerts after merging are :";

    for (auto it : ans)
    {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << endl;

    return 0;
}