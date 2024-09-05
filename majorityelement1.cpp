#include <bits/stdc++.h>
using namespace std;

// Approach 2
int majority(vector<int> arr, int n)
{
    int cnt = 0;
    int ele = 0;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            ele = arr[i];
        }
        else if (ele == arr[i])
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            cnt1++;
        }
    }
    if (cnt1 > n / 2)
    {
        return ele;
    }
    else
    {
        return -1;
    }
}

// Approach 1 Brute Force
// int majority(vector<int> arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int cnt = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 cnt++;
//             }
//         }
//         if (cnt > int(n / 2))
//         {
//             return arr[i];
//         }
//     }
//     return -1;
// }

int main()
{
    int n;
    cout << "Enter the n vlaue : ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // majority element 1 (if element > [n/2] means any ONE element is preseent in array with count > n/2)

    // Approach 1
    int ans = majority(arr, n);
    cout << "Majority element is : " << ans << endl;

    return 0;
}