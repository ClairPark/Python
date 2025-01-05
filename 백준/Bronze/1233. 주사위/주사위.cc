#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a[100] = {};
    int b, c, d;
    scanf("%d%d%d", &b, &c, &d);
    int max1 = -1;
    int ans = 0;
    for (int i = 1; i<=b; i++)
    {
        for (int j = 1; j<=c; j++)
        {
            for (int h = 1; h<=d; h++)
            {
                a[i+j+h] = a[i+j+h] + 1;
            }
        }
    }
    for (int k = 1; k<=99; k++)
    {
        if (a[k] > max1)
        {
            max1 = a[k];
            ans = k;
        }
    }
    cout << ans;
}
