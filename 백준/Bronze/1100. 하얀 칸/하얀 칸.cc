#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    char a[10][10] = {};
    int b[10][10] = {};
    int sum = 0;
    for (int h = 1; h<=8; h++)
    {
        for (int k = 1; k<=8; k++)
        {
            cin >> a[h][k];
        }
    }
    for (int i = 1; i<=8; i++)
    {
        for (int j = 1; j<=8; j++)
        {
            if ((i%2 == 1 and j%2 == 1) or (i%2 == 0 and j%2 == 0))
            {
                b[i][j] = 1;
            }
        }
    }
    for (int n = 1; n<=8; n++)
    {
        for (int m = 1; m<=8; m++)
        {
            if (a[n][m] == 'F' and b[n][m] == 1)
            {
                sum = sum + 1;
            }
        }
    }
    cout << sum;
}
