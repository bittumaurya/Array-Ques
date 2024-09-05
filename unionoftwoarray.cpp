#include <bits/stdc++.h>
using namespace std;

vector<int> result(vector<int> &arr1, vector<int> &arr2, int n, int m)
{
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int i = 0;
    int j = 0;
    vector<int> res;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {

            if (res.size() == 0 || res.back() != arr1[i])
            {
                res.push_back(arr1[i]);
            }
            i++;
        }
        else
        {

            if (res.size() == 0 || res.back() != arr2[j])
            {
                res.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n)
    {
        if (arr1[i] <= arr2[j])
        {
            if (res.size() == 0 || res.back() != arr1[i])
            {
                res.push_back(arr1[i]);
            }
            i++;
        }
    }

    while (j < m)
    {
        if (arr1[i] >= arr2[j])
        {
            if (res.size() == 0 || res.back() != arr2[j])
            {
                res.push_back(arr2[j]);
            }
            j++;
        }
    }
    return res;
}

// vector<int> result(vector<int> &arr1, vector<int> &arr2, int n, int m)
// {
//     vector<int> res;
//     set<int> st;
//     for (int i = 0; i < n; i++)
//     {
//         st.insert(arr1[i]);
//     }
//     for (int i = 0; i < m; i++)
//     {
//         st.insert(arr2[i]);
//     }

//     for (auto it : st)
//     {
//         res.push_back(it);
//     }
//     return res;
// }

int main()
{
    int n, m;
    cout << "Enter the values of n and m :";
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    cout << "\nEnter the first n elements of array 1: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "\nEnter the first n elements of array 2: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    cout << "The array elements before union are: ";
    cout << "\nfirst array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\nsecond array elements: ";
    for (int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }

    cout << "\nUNION ARRAY IS: ";
    vector<int> arr3 = result(arr1, arr2, n, m);

    for (int i = 0; i < arr3.size(); i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}