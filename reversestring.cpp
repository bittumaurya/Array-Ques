#include <bits/stdc++.h>
using namespace std;

string reverse(string str, int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }
    return str;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int n = str.length();
    string st = reverse(str, n);
    cout << " " << st;
    return 0;
}