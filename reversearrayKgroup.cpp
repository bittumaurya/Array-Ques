#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr, int n, int k)
{
    for (int i = 0; i < n; i = i + k)
    {
        int left = i;
        int right = min(i + k - 1, n - 1);
        while (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int n;
    cout << "enter n value ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "enter k value ";
    cin >> k;

    cout << " array elements are ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    reverse(arr, n, k);
    cout << "\nReverse array after k groups is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}