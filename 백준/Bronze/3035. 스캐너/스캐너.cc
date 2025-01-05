#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    char a[260][260] ={};
    int b, c, d, e;
    cin >> b >> c >> d >> e;
    for (int i = 1; i<=b; i++)
    {
        for (int j = 1; j<=c; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i<=b; i++)
    {
        for (int k = 1; k<=d; k++)
        {
            for (int j = 1; j<=c; j++)
            {
                for (int h = 1; h<=e; h++)
                {
                    cout << a[i][j];
                }
            }
            cout << '\n';
        }
        
    }
}