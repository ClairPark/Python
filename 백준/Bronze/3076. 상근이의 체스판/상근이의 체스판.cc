#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int row, column, a, b;
    cin >> row >> column >> a >> b;
    char original[10][10] = {};
    for(int i = 0; i<=column-1; i++)
    {
        for(int j = 0; j<=row-1; j++)
        {
            if((i%2 == 0 and j%2 == 0) or (i%2 == 1 and j%2 == 1))
            {
                original[i][j] = 'X';
            }
            else
            {
                original[i][j] = '.';
            }
        }
    }
    for(int j = 0; j<=row-1; j++)
    {
        for(int h = 1; h<=a; h++)
        {
            for(int i = 0; i<=column-1; i++)
            {
                for(int k = 1; k<=b; k++)
                {
                    cout << original[i][j];
                }
            }
            cout << '\n';
        }
    }
}