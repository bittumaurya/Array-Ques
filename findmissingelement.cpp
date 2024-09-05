#include <iostream>
using namespace std;

int main()
{
    int n, m, sum = 0, st = 0, missingno, i;
    int a[10];
    int arr[9];
    cout << " enter the value of n ";
    cin >> n;
    cout << "Enter the first 1 to n sorted array element ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter second n-1 array elements ";
    m = n - 1;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    cout << "the first 1 to n sorted array is ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\nthe second array is ";
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }
    sum = (n * (n + 1)) / 2;
    for (i = 0; i < m; i++)
    {
        st = st + arr[i];
    }
    missingno = sum - st;
    cout << "\nthe missing number in array is ";
    cout << missingno;
    return 0;
}