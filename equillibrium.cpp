#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int findequi(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int sumbefore = 0;
        for (int j = 0; j < i; j++)
        {
            sumbefore += arr[j];
        }
        int sumafter = 0;
        for (int j = i + 1; j < n; j++)
        {
            sumafter += arr[j];
        }
        if (sumafter == sumbefore)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int n;
    cout << "enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "\nEnter array elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "answer index is:" << findequi(arr, n);
    return 0;
}