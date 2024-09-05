#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> twosum(vector<int> &nums, int n, int target)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    int low = 0;
    int high = n - 1;
    while (high > low)
    {
        int sum = nums[low] + nums[high];
        if (sum > target)
        {
            low++;
        }
        else if (sum < target)
        {
            high--;
        }
        else
        {
            vector<int> temp = {nums[low], nums[high]};
            res.push_back(temp);
            low++;
            high--;
            // while (high > low && nums[low] == nums[low + 1])
            // {
            //     low++;
            // }
            // while (high > low && nums[high] == nums[high - 1])
            // {
            //     high--;
            // }
        }
    }
    if (res.empty())
    {
        cout << "Not Find sum";
        return {};
    }
    return res;
}

int main()
{
    int n = 6;
    vector<int> nums = {1, 2, 3, 2, 4, 0};
    int target = 4;
    vector<vector<int>> ans = twosum(nums, n, target);
    for (auto i : ans)
    {
        cout << "[";
        for (auto j : i)
            cout << j << " ";
        cout << "]";
    }
    return 0;
}