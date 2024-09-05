#include<iostream>
using namespace std;

 int main()
 {
    int arr[20],x,i,n,first,middle,last;
    cout<<"enter the size of array";
    cin>> n;
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    cout<<"enter searching element";
    cin>> x;
    first=0;
    last=n-1;
    while(first<=last)
    {
        middle=(first+last)/2;
        if(arr[middle]==x)
        {
            cout<<"element found ";
            break;
        }
        if(arr[middle]>x)
        {
            last=middle-1;
        }
        if(arr[middle]<x)
        {
            first=middle+1;
        }
    }
    if(arr[middle]==x)
    {
        cout<<"element is at position"<<(middle+1);
    }
    else{
    cout<<"number not found";
    }
    return 0;
    
 }