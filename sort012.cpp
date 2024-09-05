
#include <bits/stdc++.h>
using namespace std;

vector<int> threepartition(vector<int> &arr, int n, int a, int b)
{
    int mid = 0;
    int low = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] < a)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] > b)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
        else
        {
            mid++;
        }
    }
    return arr;
}

int main()
{
    int n = 7;
    vector<int> arr = {6, 4, 3, 2, 1, 7, 8};
    int a = 3;
    int b = 5;
    vector<int> ans = threepartition(arr, n, a, b);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}