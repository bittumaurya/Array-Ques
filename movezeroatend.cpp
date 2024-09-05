#include <iostream>
using namespace std;

void movetozero(int arr[], int n)
{
    int i;
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j == -1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

// void movetozero(int a[], int n)
// {
//      int j=-1;
//      int i;
//     for( i=0;i<=n;i++)
//     {
//         if(a[i]==0)
//         {
//             j=i;
//             break;
//         }
//     }

//     if(j==-1)
//     {
//         for( i=0;i<=n;i++)
//         {
//            std:: cout<<a[i];
//         }
//     }
//     for(i=j+1;i<=n;i++)
//     {
//         if(a[i]!=0)
//         {
//             int temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;
//             j++;
//         }
//     }
// }

int main()
{
    int n, i;
    int a[10];
    std::cout << "enter n : ";
    cin >> n;
    cout << "enter array elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    movetozero(a, n);
    cout << "array after moving zero at end ";
    for (i = 0; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}