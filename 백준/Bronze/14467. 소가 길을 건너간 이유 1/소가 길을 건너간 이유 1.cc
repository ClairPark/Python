#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    scanf("%d", &a);
    int b, c;
    int sum = 0;
    int total = 0;
    int d[15] = {};
    for (int i = 1; i<=10; i++)
    {
        d[i] = 2;
    }
    for (int i = 1; i<=a; i++)
    {
        scanf("%d%d", &b, &c);
        if (d[b] != c)
        {
            sum = sum + 1;
            d[b] = c;
        }
    }
    for (int i = 1; i<=10; i++)
    {
        if (d[i] != 2)
        {
            total = total + 1;
        }
    }
    cout << sum - total;
}
