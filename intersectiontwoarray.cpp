// INTERSECTION OF TWO ARRAY

#include <bits/stdc++.h>
using namespace std;

vector<int> result(int a[], int b[], int n, int m)
{
    sort(a, a + n);
    sort(b, b + m);
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            // while (i < n && a[i] == a[i + 1])      if we want to take intersecting elements only one time we use such condition
            // {
            //     i++;
            // }
            // while (j < m && b[j] == b[j + 1])
            // {
            //     j++;
            // }
            i++;
            j++;
        }
    }
    return ans;
}

// vector<int> result(int a[], int b[], int n, int m)
// {
//     sort(a, a + n);
//     sort(b, b + m);
//     vector<int> ans;
//     vector<int> vis(m, 0);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (a[i] == b[j] && vis[j] == 0)
//             {
//                 ans.push_back(a[i]);
//                 vis[j] = 1;
//                 break;
//             }
//         }
//     }
//     return ans;
// }

int main()
{
    int n, m;
    cout << "Enter the value of n and m: ";
    cin >> n >> m;

    int a[n];
    int b[m];
    vector<int> ans(n + m);
    cout << "\nEnter first array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "\nEnter second array elements : ";
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    cout << "\narray before intersection ";
    cout << "\nfirst array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\nSecond array elements: ";
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }

    cout << "\nArray elements after intersection: ";

    ans = result(a, b, n, m);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}