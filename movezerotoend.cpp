#include<iostream>
using namespace std;

void movetozero(int a[], int n)
{
     int j=-1;
     int i;
    for( i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            j=i;
            break;
        }
    }

    if(j==-1)
    {
        for( i=0;i<n;i++)
        {
           std:: cout<<a[i];
        }
    }
    for(i=j+1;i<n;i++)
    {
        if(a[i]!=0)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
}

int main()
{
    int i;
    int a[10]={12,0,5,0,4,6,0,9,12,0};
    movetozero(a,10);
    cout<<"array after move zero to end is : ";
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}