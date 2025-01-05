#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    char card[200][200] = {};
    int a, b, c, d;
    cin >> a >> b;
    for (int i = 1; i<=a; i++)
    {
        for (int j = 1; j<=b; j++)
        {
            cin >> card[i][j];
        }
    }
    cin >> c >> d;
    for(int i = 1; i<=a; i++)
    {
        for (int j = 1; j<=b; j++)
        {
            card[i][2*b-j+1] = card[i][j];
        }
    }
    for (int j = 1; j<=2*b; j++)
    {
        for(int i = 1; i<=a; i++)
        {
            card[2*a-i+1][j] = card[i][j];
        }
    }
    for (int i = 1; i<=2*a; i++)
    {
        for (int j = 1; j<=2*b; j++)
        {
            if (i == c and j == d)
            {
                if (card[i][j] == '.')
                {
                    card[i][j] = '#';
                }
                else
                {
                    card[i][j] = '.';
                }
            }
        }
    }
    for (int i = 1; i<=2*a; i++)
    {
        for (int j = 1; j<=2*b; j++)
        {
            cout << card[i][j];
        }
        cout << '\n';
    }
}