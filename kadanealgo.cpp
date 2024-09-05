#include <bits/stdc++.h>
using namespace std;

int kandane(vector<int> arr, int n)
{
    int maxi = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        maxi = max(maxi, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

// int kandane(vector<int> arr, int n)
// {
//     int maxi = 0;

//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += arr[j];
//             if (sum > maxi)
//             {
//                 maxi = sum;
//             }
//         }
//     }
//     return maxi;
// }

int main()
{
    int n;
    cout << "enter n value ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int res = kandane(arr, n);
    cout << "Maximum array sum is: ";
    cout << res;
    return 0;
}