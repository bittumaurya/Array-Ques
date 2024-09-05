#include <bits/stdc++.h>
using namespace std;

// int water(vector<int> arr, int n)
// {
//     int left = 0;
//     int right = n - 1;
//     int maxleft = 0;
//     int maxright = 0;
//     int res = 0;

//     while (left < right)
//     {
//         if (arr[left] <= arr[right])
//         {
//             if (arr[left] > maxleft)
//             {
//                 maxleft = arr[left];
//             }
//             else
//             {
//                 res = res + maxleft - arr[left];
//             }
//             left++;
//         }
//         else
//         {
//             if (arr[right] >= maxright)
//             {
//                 maxright = arr[right];
//             }
//             else
//             {
//                 res = res + maxright - arr[right];
//             }
//             right--;
//         }
//     }
//     return res;
// }

int water(vector<int> arr, int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int j = i;
        int maxleft = 0;
        int maxright = 0;
        while (j >= 0)
        {
            maxleft = max(maxleft, arr[j]);
            j--;
        }
        j = i;
        while (j < n)
        {
            maxright = max(maxright, arr[j]);
            j++;
        }
        res = res + min(maxleft, maxright) - arr[i];
    }
    return res;
}

int main()
{
    int n = 6;
    // cout << " enter the n value ";
    // cin >> n;
    vector<int> arr = {4, 2, 0, 3, 2, 5};
    // cout << " enter arrsy elemnt ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    int res = water(arr, n);
    cout << " the water trap after some is ";
    cout << res;

    return 0;
}