#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d;
    int max1 = 0;
    scanf("%d", &a);
    for (int i = 1; i<=a; i++)
    {
        int sum = 0;
        scanf("%d %d %d", &b, &c, &d);
        if (b == c and c == d)
        {
            sum = 10000 + c *1000;
        }
        else if(b == c and b!=d)
        {
            sum = 1000 + b*100;
        }
        else if(c == d and c!=b)
        {
            sum = 1000 + c*100;
        }
        else if(d == b and d!=c)
        {
            sum = 1000 + d*100;
        }
        else
        {
            sum = max(b, max(c, d))*100;
        }
        if (max1 <= sum)
        {
            max1 = sum;
        }
    }
    cout << max1;
}