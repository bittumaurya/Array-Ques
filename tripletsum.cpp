#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threesum(vector<int> nums, int n)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    int target = 0;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        int low = i + 1;
        int high = n - 1;
        while (high > low)
        {
            int sum = nums[i] + nums[low] + nums[high];
            if (sum > target)
            {
                high--;
            }
            else if (sum < target)
            {
                low++;
            }
            else
            {
                vector<int> temp = {nums[i], nums[low], nums[high]};
                res.push_back(temp);
                low++;
                high--;
                while (high > low && nums[low] == nums[low + 1])
                {
                    low++;
                }
                while (high > low && nums[high] == nums[high - 1])
                {
                    high--;
                }
            }
        }
    }
    if (res.empty())
    {
        cout << "Not find Triplet";
        return {};
    }
    return res;
}

int main()
{
    vector<int> nums = {-1, 0, 1};
    int n = 3;
    vector<vector<int>> result = threesum(nums, n);
    for (auto it : result)
    {
        cout << "[ ";
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}