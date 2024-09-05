#include <bits/stdc++.h>
using namespace std;

void result(vector<int> &a, int n)
{
    vector<int> pos, neg;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            pos.push_back(a[i]);
        }
        else
        {
            neg.push_back(a[i]);
        }
    }
    if (pos.size() > neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            a[2 * i] = pos[i];
            a[(2 * i) + 1] = neg[i];
        }
        int index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++)
        {
            a[index] = pos[i];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            a[2 * i] = pos[i];
            a[(2 * i) + 1] = neg[i];
        }
        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++)
        {
            a[index] = neg[i];
            index++;
        }
    }
    // vector<int> res(n);
    // vector<int> pos;
    // vector<int> neg;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > 0)
    //     {
    //         pos.push_back(arr[i]);
    //     }
    //     else
    //     {
    //         neg.push_back(arr[i]);
    //     }
    // }

    // if (pos.size() > neg.size())
    // {
    //     for (int i = 0; i < neg.size(); i++)
    //     {
    //         arr[i * 2] = pos[i];
    //         arr[i * 2 + 1] = neg[i];
    //     }
    //     int ind = neg.size() * 2;
    //     for (int i = neg.size(); i < pos.size(); i++)
    //     {
    //         arr[ind] = pos[i];
    //         ind++;
    //     }
    // }
    // else
    // {
    //     for (int i = 0; i < pos.size(); i++)
    //     {
    //         arr[i * 2] = pos[i];
    //         arr[i * 2 + 1] = neg[i];
    //     }
    //     int ind = pos.size() * 2;
    //     for (int i = pos.size(); i < neg.size(); i++)
    //     {
    //         arr[ind] = neg[i];
    //         ind++;
    //     }
    // }
}

int main()
{

    int n;
    cout << "enter n value : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // No of elemets are not even (it is odd);
    //   INPUT                         OUTPUT
    // {9,2,-1,6,-20,-4 , 8,9,0}  ==> {9,-1,2,-20,6,-4 , 8,9,0}
    result(arr, n);
    cout << " array after alternating element is :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}