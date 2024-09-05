#include <iostream>
using namespace std;

int main()
{
    int n, m, i, result;

    int xor1[100], xor2[100];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> xor1[i];
    }
    cin >> m;
    for (i = 0; i < m; i++)
    {
        cin >> xor2[i];
    }
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            result = xor1[i] ^ xor2[j];
        }
    }
    cout << result;
    return 0;
}