
#include <iostream>
using namespace std;

void leftrotate(int arr[], int n, int d)
{
    d = d % n;
    int temp[d];
    int i;

    for (i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    int j = 0;
    for (i = n - d; i < n; i++)
    {
        arr[i] = temp[j];
        j++;
    }
}
int main()
{
    int n;
    int arr[100];
    cout << "enter value of n ";
    cin >> n;
    cout << "enter array element ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d;
    cout << "enter how many time to rotate array elemnts at left ";
    cin >> d;
    leftrotate(arr, n, d);
    cout << "after rotation array is";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}