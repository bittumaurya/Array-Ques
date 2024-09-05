#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//  NOT COMPLETE

/*vector<int> rearrangearray(vector<int> &arr)
{
    int pos = 0;
    int neg = 1;
    int n = arr.size();
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            ans[neg] = arr[i];
            neg = neg + 2;
        }
        else
        {
            ans[pos] = arr[i];
            pos = pos + 2;
        }
    }
    return ans;
}*/
int main()
{
    int pos[10], i;
    int neg[10];
    int arr[6] = {1, -2, 4, 5, -5, -8};
    cout << "before rearrangeing array is:";
    for (i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    for (i = 0; i < 6; i++)
    {
        if (arr[i] < 0)
        {
            neg[i] = arr[i];
        }
        else
        {
            pos[i] = arr[i];
        }
    }
    for (i = 0; i < 3; i++)
    {
        cout << pos[i] << " ";
    }
    cout << "\n";
    for (i = 0; i < 3; i++)
    {
        cout << neg[i] << " ";
    }

    // cout << "\nAfter rearranging array is:";
    /*for (i = 0; i < 3; i++)
    {
        arr[i * 2] = pos[i];
        arr[(i * 2) + 1] = neg[i];
    }
    for (i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }*/
    return 0;
}