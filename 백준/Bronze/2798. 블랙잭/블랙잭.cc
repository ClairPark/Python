#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    int c[100] = {};
    cin >> a >> b;
    int max1 = 0;
    for (int i = 1; i<= a; i++)
    {
        cin >> c[i];
    }
    for (int j = 1; j<=a; j++)
    {
        for (int h = 1; h<=a; h++)
        {
            for (int k = 1; k<=a; k++)
            {
                if (j != h and h != k and j!= k)
                {
                    if (c[j] + c[h] + c[k] <= b)
                    {
                        if (c[j] + c[h] + c[k] >= max1)
                        {
                            max1 = c[j] + c[h] + c[k];
                        }
                    }
                }
            }
        }
    }
    cout << max1;
}
