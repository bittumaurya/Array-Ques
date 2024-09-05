
#include <iostream>
using namespace std;

void leftrotate(int arr[] , int n , int d)
{
    d = d % n;
    int temp[d];
    
    for(int i = 0 ; i < d ; i++)
    {
        temp[i] = arr[i];
    }

    for(int i = d ; i < n; i++)
    {
        arr[i-d] = arr[i];
    }

    for(int i = n-d ; i < n ; i++)
    {
        arr[i] = temp[i-(n-d)];
    }
}
int main() {
    int n;
    int arr[n];
    cout<<"enter value of n ";
    cin>>n;
    for (int i = 0 ; i < n ; i++)
    {
        cout<< "enter array element ";
        cin >> arr[i];
    }
    int d;
    cout<<"enter how many time to rotate array elemnts at left";
    cin >> d;
    leftrotate(arr , n , d);
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"after rotation array is";
        cout << arr[i];
    }

    return 0;
}