#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, total = 0, b = 0, c = 0, max1= 100;
    cin >> a;
    char grid[100][10][10] = {};
    for (int h = 1; h <= a; h++)
    {
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 7; j++)
            {
                cin >> grid[h][i][j];
            }
        }
    }
    for (int h = 1; h <= a; h++)
    {
        for (int k = 1; k <= a; k++)
        {
            int sum = 0;
            if (h != k)
            {
                for (int i = 1; i <= 5; i++)
                {
                    for (int j = 1; j <= 7; j++)
                    {
                        if (grid[h][i][j] != grid[k][i][j]) 
                        {
                            sum = sum + 1;
                        }
                    }
                }
                if (max1 > sum)
                {
                    total = sum;
                    max1 = total;
                    b = h;
                    c = k;
                }
            }
        }
    }
    cout << min(b, c) << ' ' << max(b, c);
}