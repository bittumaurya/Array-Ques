#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> setmatzero(vector<vector<int>> &matrix, int n, int m)
{
    vector<vector<int>> result(n, vector<int>(m));
    int row[n] = {0};
    int col[m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] || col[j])
            {
                matrix[i][j] = 0;
            }
            result[i][j] = matrix[i][j];
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

    // set matrix to zero

    vector<vector<int>> ans = setmatzero(arr, n, m);
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