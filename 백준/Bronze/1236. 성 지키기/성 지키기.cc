#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    char castle[100][100] = {};
    int total1 = 0, total2 = 0;
    cin >> a >> b;
    for (int i = 1; i<=a; i++)
    {
        for (int j = 1; j<=b; j++)
        {
            cin >> castle[i][j];
        }
    }
    for (int i = 1; i<=a; i++)
    {
        int sum = 0;
        for (int j = 1; j<=b; j++)
        {
            if(castle[i][j] == 'X')
            {
                sum = sum + 1;
            }
        }
        if (sum == 0)
        {
            total1 = total1 + 1;
        }
    }
    for (int i = 1; i<=b; i++)
    {
        int sum = 0;
        for (int j = 1; j<=a; j++)
        {
            if(castle[j][i] == 'X')
            {
                sum = sum + 1;
            }
        }
        if (sum == 0)
        {
            total2 = total2 + 1;
        }
    }
    cout << max(total1, total2);
}