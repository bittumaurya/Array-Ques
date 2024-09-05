#include <bits/stdc++.h>
using namespace std;

// Approach 1 (BRUTE)
vector<int> result(vector<int> arr, int k)
{
    vector<int> res;
    int n = arr.size();
    int maxi = 0;
    int startind = INT_MAX;
    int endind = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                maxi = max(maxi, j - i + 1);
                startind = min(startind, i);
                endind = max(endind, j);
            }
        }
    }
    for (int i = startind; i <= endind; i++)
    {
        res.push_back(arr[i]);
    }
    return res;
}

int main()
{

    int n;
    cout << "Enter the n value : ";
    cin >> n;
    vector<int> arr(n);
    vector<int> ans;
    cout << "Enter array elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // maximum subarray with sum = 0;
    int sum = 0;
    ans = result(arr, sum);

    cout << "The maximum subarray with sum as 0 is: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}