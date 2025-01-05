#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int b = 0;
    int row = -1, column;
    for (int i = 1; i<=a.size(); i++)
    {
        for (int j = 1; j<=a.size(); j++)
        {
            if (i * j == a.size())
            {
                if (j >= i)
                {
                    if (i > row)
                    {
                        row = i;
                        column = j;
                    }
                }
            }
        }
    }
    for (int i = 0; i <= row-1; i++)
    {
        b = i;
        for (int j = 1; j <= column; j++)
        {
            cout << a[b];
            b = b + row;
        }
    }
}