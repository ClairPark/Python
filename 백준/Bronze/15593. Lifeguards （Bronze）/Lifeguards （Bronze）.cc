#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    int start[150] = {};
    int end[150] = {};
    int grid[1010] = {};
    int s = 0, max = 0;
    cin >> a;
    for (int i = 1; i<=a; i++)
    {
        cin >> start[i] >> end[i];
        end[i] = end[i] - 1;
    }
    for (int i = 1; i<=a; i++)
    {
        int grid[1010] = {};
        for (int j = 1; j<=a; j++)
        {
            if (j != i)
            {
                for (int h = start[j];h<=end[j];h++)
                {
                    grid[h] = 1;
                }
            }
        }
        int s = 0;
        for (int k = 0; k<=1000;k++)
        {
            if (grid[k] == 1)
            {
                s = s+1;
            }
        }
        if (s > max)
        {
            max = s;
        }
    }
    cout << max;
}
