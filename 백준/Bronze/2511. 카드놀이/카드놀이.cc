#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a[15], b[15];
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    for (int i = 1; i<=10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 1; j<=10; j++)
    {
        scanf("%d", &b[j]);
    }
    for (int k = 1; k<=10; k++)
    {
        if (a[k]>b[k])
        {
            sum1 = sum1 + 3;
        }
        else if(b[k]>a[k])
        {
            sum2 = sum2 + 3;
        }
        else
        {
            sum1 = sum1 + 1;
            sum2 = sum2 + 1;
        }
    }
    printf("%d %d\n", sum1, sum2);
    if (sum1>sum2)
    {
        printf("A");
    }
    else if(sum2>sum1)
    {
        printf("B");
    }
    else if(sum1 == sum2)
    {
        for (int f = 10; f>=1; f--)
        {
            if (a[f]>b[f])
            {
                printf("A");
                break;
            }
            else if (b[f]>a[f])
            {
                printf("B");
                break;
            }
            if (a[f] == b[f])
            {
                sum3 = sum3 + 1;
                if (sum3 == 10)
                {
                    printf("D");
                }
            }
        }
    }
}
