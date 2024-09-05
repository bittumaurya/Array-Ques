#include <bits/stdc++.h>
using namespace std;

// Approach 1
vector<vector<int>> rotate90left(vector<vector<int>> &matrix, int n, int m)
{
    vector<vector<int>> result(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            result[n - j - 1][i] = matrix[i][j];
        }
    }
    return result;
}

int main()
{

    int n, m;
    cout << "enter the row value: ";
    cin >> n;
    cout << "enter the column value: ";
    cin >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    cout << "Enter matrix elements :";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The matrix is:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "[";
        for (int j = 0; j < m; j++)
        {
            cout << " " << arr[i][j] << " ";
        }
        cout << "]" << "\n";
    }
    vector<vector<int>> ans = rotate90left(arr, n, m);
    cout << "The resultant matrix is:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "[";
        for (int j = 0; j < m; j++)
        {
            cout << " " << ans[i][j] << " ";
        }
        cout << "]" << "\n";
    }

    return 0;
}