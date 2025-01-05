#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d;
    int max1 = 0;
    int max2 = 0;
    int num1 = 0;
    int num2 = 0;
    int e[10000] = {};
    cin >> a >> b;
    for (int j = 0; j<=9999; j++)
    {
        e[j] = 1;
    }
    for (int i = 1; i<=b; i++)
    {
        int sum = 0;
        cin >> c >> d;
        if ((d - c) > max1)
        {
            max1 = d - c;
            num1 = i;
        }
        for (int h = c; h <= d; h++)
        {
            if (e[h] == 1)
            {
                sum = sum +1;
                e[h] = 0;
            }
        }
        if (sum > max2)
        {
            max2 = sum;
            num2 = i;
        }
    }
    printf("%d\n%d", num1, num2);
}
