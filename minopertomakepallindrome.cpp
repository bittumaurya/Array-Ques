#include <bits/stdc++.h>
using namespace std;

int findnoofoper(vector<int> &arr, int n)
{
    int i = 0;
    int j = n - 1;
    int count = 0;
    while (j > i)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else if (arr[i] < arr[j])
        {
            i++;
            count++;
            arr[i] += arr[i - 1];
        }
        else
        {
            j--;
            arr[j] += arr[j + 1];
            count++;
        }
    }
    return count;
}

int main()
{
    int n = 4;
    vector<int> arr = {11, 14, 15, 99};
    int res = findnoofoper(arr, n);
    cout << "number of operation to make pallindromic " << res;

    return 0;
}