#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int x, y, m;
    int max1 = 0;
    cin >> x >> y >> m;
    for (int i = 0; i<=m; i++)
    {
        for (int j = 0; j<=m; j++)
        {
            if (i*x + j*y<=m)
            {
                if (i*x + j*y > max1)
                {
                    max1 = i*x + j*y;
                }
            }
        }
    }
    cout << max1;
}
