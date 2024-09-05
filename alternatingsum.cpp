#include <bits/stdc++.h>
using namespace std;

int result(int n)
{

    // vector<int> ans, n1, n2;

    // while (n)
    // {
    //     ans.push_back(n % 10);
    //     n /= 10;
    // }
    // reverse(ans.begin(), ans.end());
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     if (i % 2 == 0)
    //     {

    //         n1.push_back(ans[i]);
    //     }
    //     else
    //     {
    //         n2.push_back(ans[i]);
    //     }
    // }
    // int sum1 = 0, sum2 = 0;
    // for (int i = 0; i < n1.size(); i++)
    // {
    //     sum1 += n1[i];
    // }
    // for (int i = 0; i < n2.size(); i++)
    // {
    //     sum2 += n2[i];
    // }

    // return sum1 - sum2;
    vector<int> temp;
    while (n)
    {
        int rem = n % 10;
        temp.push_back(rem);
        n /= 10;
    }

    reverse(temp.begin(), temp.end());
    vector<int> pos;
    vector<int> neg;
    int sumpos = 0;
    int sumneg = 0;
    for (int i = 0; i < temp.size(); i++)
    {
        if (i % 2 == 0)
        {
            pos.push_back(temp[i]);
        }
        else
        {
            neg.push_back(temp[i]);
        }
    }
    for (int i = 0; i < pos.size(); i++)
    {
        sumpos += pos[i];
    }
    for (int i = 0; i < neg.size(); i++)
    {
        sumneg += neg[i];
    }
    return sumpos - sumneg;
}

int main()
{
    int n;
    cout << "Enter n value ";
    cin >> n;
    ;

    // altenating digit elements
    //{521} == {+5} + {-2} + {1} = 4

    int res = result(n);
    cout << "result is " << res << endl;

    return 0;
}