#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, n;
    int cost[550] = {};
    int des[550] = {};
    int city[550] = {};
    scanf("%d%d%d", &a, &b, &n);
    int max1 = 10000;
    for(int i = 1; i<=n; i++)
    {
        int num = 0;
        int m = 0;
        int n = 0;
        scanf("%d%d", &cost[i], &des[i]);
        for (int j = 1; j<=des[i]; j++)
        {
            scanf("%d", &city[j]);
            if (city[j] == a)
            {
                num = num +1;
                m = j;
            }
            else if (city[j] == b)
            {
                num = num + 1;
                n = j;
            }
        }
        if (n > m and cost[i] < max1 and num == 2)
        {
            max1 = cost[i];
        }
    }
    if (max1 != 10000)
    {
        printf("%d", max1);
    }
    else
    {
        printf("-1");
    }
}
