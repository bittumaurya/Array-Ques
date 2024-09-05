#include<iostream>
using namespace std;

int sumofdigit(int n)
{
    int sum=0,rem=0;
    while(n|=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n,ans;
    cout<<"Enter the number n: ";
    cin>>n;
    ans=sumofdigit(n);
    cout<<"The sum of digit of a given number is ";
    cout<<ans;
    return 0;
}