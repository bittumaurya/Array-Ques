#include <bits/stdc++.h>
using namespace std;

// Approach 2

int longestconsub(vector<int> arr, int n)
{
    sort(arr.begin(), arr.end());
    int maxi = 0;
    int curr = 1;
    int lastnum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - 1 == lastnum)
        {
            curr = curr + 1;
            lastnum = arr[i];
        }
        else if (arr[i] != lastnum)
        {
            curr = 1;
            lastnum = arr[i];
        }
        maxi = max(maxi, curr);
    }
    return maxi;
}

// Approach 1

//  bool ls(vector<int> arr, int m)
//  {
//      int n = arr.size();
//      for (int i = 0; i < n; i++)
//      {
//          if (arr[i] == m)
//              return true;
//      }
//      return false;
//  }

// int longestconsub(vector<int> arr, int n)
// {
//     int max_len = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int cnt = 1;
//         int num = arr[i];
//         while (ls(arr, num + 1) == true)
//         {
//             cnt = cnt + 1;
//             num = num + 1;
//         }
//         max_len = max(cnt, max_len);
//     }
//     return max_len;
// }

int main()
{
    int n;
    cout << "Enter the n value : ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = longestconsub(arr, n);
    cout << "the longest lenght of consequetive subarray is : ";
    cout << ans;

    return 0;
}