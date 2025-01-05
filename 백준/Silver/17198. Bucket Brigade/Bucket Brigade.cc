#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    char farm[15][15] = {};
    int a, b, c, d, e, f;
    for (int i = 1; i<=10; i++)
    {
        for (int j = 1; j<=10; j++)
        {
            cin >> farm[i][j];
        }
    }
    for (int i = 1; i<=10; i++)
    {
        for (int j = 1; j<=10; j++)
        {
            if (farm[i][j] == 'B')
            {
                a = i;
                b = j;
            }
            if (farm[i][j] == 'L')
            {
                c = i;
                d = j;
            }
            if (farm[i][j] == 'R')
            {
                e = i;
                f = j;
            }
        }
    }    
    if (((a == c and c== e) or (b == d and d == f)) and ((a < e and e < c) or (c < e and e < a) or (b < f and f < d) or (d < f and f < b)))
    {
        cout << abs(a-c) + abs(b-d) + 1;
    }
    else
    {
        cout << abs(a-c) + abs(b-d) - 1;
    }
}