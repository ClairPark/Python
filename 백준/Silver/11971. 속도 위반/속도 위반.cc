#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int total1[150] = {};
    int total2[150] = {};
    int num1, num2;
    int len1 = 1, lim1, e = 0;
    int len2 = 1, lim2;
    int max1 = 0;
    scanf("%d%d", &num1, &num2);
    for (int i = 1; i<=num1; i++)
    {
        e = e + len1;
        scanf("%d%d", &len1, &lim1);
        for (int j = e; j<=e + len1 - 1; j++)
        {
            total1[j] = lim1;
        }
    }
    e = 0;
    for (int i = 1; i<=num2; i++)
    {
        e = e + len2;
        scanf("%d%d", &len2, &lim2);
        for (int j = e; j<=e + len2 - 1; j++)
        {
            total2[j] = lim2;
        }
    }
    for (int i= 1; i<=100; i++)
    {
        if (total2[i] - total1[i] > max1)
        {
            max1 = total2[i] - total1[i];
        }
    }
    cout << max1;
    
}
