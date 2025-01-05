#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d;
    int sum1 = 0;
    int sum2 = 0;
    int sum0 = 0;
    scanf("%d%d", &a, &b);
    for (int i = 1; i<=a; i++)
    {
        scanf("%d:%d", &c, &d);
        sum1 = sum1 + c;
        sum2 = sum2 + d;
    }
    sum2 = sum2 + sum1*60;
    sum1 = 0;
    sum2 = sum2 - (a-1)*b;
    sum1 = sum2/60;
    if (sum1 >= 60)
    {
        sum0 = sum1/60;
        sum1 = sum1%60;
    }
    printf("%02d:%02d:%02d", sum0, sum1, sum2%60);
}
