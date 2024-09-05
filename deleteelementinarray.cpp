#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

void deleteelement(int arr[], int n, int pos)
{
    int i;
    int size = n;
    for (int i = pos; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    size--;
}

int main()
{
    int n, pos;
    cout << "enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter array elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << " Enter position of the element ";
    cin >> pos;

    deleteelement(arr, n, pos);

    cout << "\narray elements after deletion ";
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}