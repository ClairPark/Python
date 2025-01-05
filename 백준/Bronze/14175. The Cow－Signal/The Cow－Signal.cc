#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int x, y, z;
    char signal[150][150] = {};
    cin >> y >> x >> z;
    for (int i = 1; i <= y; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            cin >> signal[i][j];
        }
    }
    for (int i = 1; i <= y; i++)
    {
        for (int k = 1; k<=z; k++)
        {
            for (int j = 1; j <= x; j++)
            {
                for (int h = 1; h<=z; h++)
                {
                    cout << signal[i][j];
                }
            }
            cout << '\n';
        }
    }
}