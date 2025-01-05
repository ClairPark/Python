#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a, b;
    int r = 0, s = 0, min1 = 999;
    cin >> a >> b;
    char c[40][40] = {};
    for (int i = 0; i<=39; i++)
    {
        for (int j = 0; j<=39; j++)
        {
            c[i][j] = '.';
        }
    }
    for (int i = 0; i<=a.size()-1; i++)
    {
        for (int j = 0; j<=b.size()-1; j++)
        {
            if (a[i] == b[j])
            {
                if (i < min1)
                {
                    r = i;
                    min1 = i;
                    s = j;
                }
            }
        }
    }
    for (int h = 0; h<=a.size()-1; h++)
    {
        c[s][h] = a[h];
    }
    for (int k = 0; k<=b.size()-1; k++)
    {
        c[k][r] = b[k];
    }
    for (int i = 0; i<=b.size()-1; i++)
    {
        for (int j = 0; j<=a.size()-1; j++)
        {
            cout << c[i][j];
        }
        cout <<'\n';
    }
}