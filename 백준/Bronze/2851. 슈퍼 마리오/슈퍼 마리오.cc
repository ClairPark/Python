#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a[15];
    int sum = 0;
    int min1 = 1000;
    int num = 0;
    int b = 0;
    for (int i = 1; i<=10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 1; j<=10; j++)
    {
        sum = sum + a[j];
        if (sum == 100)
        {
            printf("%d", sum);
            b = 1;
            return 0;
        }
        else if (abs(sum - 100) <= min1)
        {
            min1 = abs(sum - 100);
            num = sum;
        }
    }
    if (b != 1)
    {
        printf("%d", num);
    }
}
