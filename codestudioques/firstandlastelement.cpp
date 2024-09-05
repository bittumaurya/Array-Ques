#include<iostream>
using namespace std;


int firstocc(int arr[], int n, int k)
{
    int ans2=0;
    int s=0,e=n-1;
    int mid = (s+e)/2;
    while(s<=e){
        if(arr[mid]==k)
        {
            ans2 = mid;
            e=mid-1;
        }
        else if(k > arr[mid])
        {
            s = mid+1;

        }
        else{
            e = mid-1;
        }
        mid=(s+e)/2;
    }
    return ans2;
}

int lastocc(int arr[], int n, int k)
{
    int ans1=0;
    int s=0,e=n-1;
    int mid = (s+e)/2;
    while(s<=e){
        if(arr[mid]==k)
        {
            ans1 = mid;
            s=mid+1;
        }
        else if(k > arr[mid])
        {
            s = mid+1;

        }
        else{
            e = mid-1;
        }
        mid=(s+e)/2;
    }
    return ans1;

}
int main(){
    int arr[11]={1,3,3,3,4,5,5,5,7,7,7};
    int a=firstocc(arr,11,7);
    int b=lastocc(arr,11,7);
    cout<< "first occurence of 5 is at index "<<firstocc(arr,11,5);
    cout<< "\nlast occurence of 5 is at index "<<lastocc(arr,11,5);
    cout<<"\nthe total number of occurence of 5 is "<<(b-a+1);
 
 return 0;
}

