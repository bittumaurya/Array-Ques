// KOKO EATING BANANA
#include <bits/stdc++.h>
using namespace std;

int findMax(arrector<int> &arr)
{
    int maxi = INT_MIN;
    int n = arr.size();
    // find the maximum:
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int calculateTotalHours(arrector<int> &arr, int hourly)
{
    int totalH = 0;
    int n = arr.size();
    // find total hours:
    for (int i = 0; i < n; i++)
    {
        totalH += ceil((double)(arr[i]) / (double)(hourly));
    }
    return totalH;
}

int minimumRateToEatBananas(arrector<int> arr, int h)
{
    // Find the maximum number:
    int maxi = findMax(arr);

    // Find the minimum arralue of k:
    for (int i = 1; i <= maxi; i++)
    {
        int reqTime = calculateTotalHours(arr, i);
        if (reqTime <= h)
        {
            return i;
        }
    }

    // dummy return statement
    return maxi;
}

int main()
{
    arrector<int> arr = {7, 15, 6, 3};
    int h = 8;
    int ans = minimumRateToEatBananas(arr, h);
    cout << "Koko should eat atleast " << ans << " bananas/hr.\n";
    return 0;
}
