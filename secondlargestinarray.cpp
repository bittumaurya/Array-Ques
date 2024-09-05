// second largest element in the array

#include <iostream>
using namespace std;

int secondlargest(int arr[], int n)
{
    int lar = arr[0];
    int slar = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > lar)
        {
            slar = lar;
            lar = arr[i];
        }
        else if (arr[i] < lar && arr[i] > slar)
        {
            slar = arr[i];
        }
    }
    return slar;
}

int secondsmallest(int arr[], int n)
{
    int sma = arr[0];
    int ssma = 99999;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < sma)
        {
            ssma = sma;
            sma = arr[i];
        }
        else if (arr[i] > sma && arr[i] < ssma)
        {
            ssma = arr[i];
        }
    }
    return ssma;
}
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int secondlar = secondlargest(arr, n);
    int secondsma = secondsmallest(arr, n);

    cout << "the second largest element in  array is " << secondlar << endl;
    cout << "the second smallest element in array is " << secondsma << endl;
    return 0;
}
