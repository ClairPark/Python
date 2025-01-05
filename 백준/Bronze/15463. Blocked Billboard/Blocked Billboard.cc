#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int a[2020][2020] = {};
int main()
{
    int b[10] = {};
    int c[10] = {};
    int sum = 0;
    int d = 0;
    int e = 0;
    int l = 0;
    int j = 0;
    for (int i = 1; i<=2; i++)
    {
        for(int j = 1; j<=4; j++)
        {
            scanf("%d", &b[j]);
        }
        for (int h = b[1]; h<=b[3]-1; h++)
        {
            for (int k = b[2]; k<=b[4]-1;k++)
            {
                 d = h +1000;
                 e = k + 1000;
                a[d][e] = 1;
            }
        }
    }
    for (int t = 1; t<=4; t++)
    {
        scanf("%d", &c[t]);
    }
    for (int m = c[1]; m<=c[3]-1; m++)
    {
        for (int n = c[2]; n<=c[4]-1; n++)
        {
            l = m + 1000;
            j = n + 1000;
            a[l][j] = 0;
        }
    }
    for (int f = 0; f<=2000; f++)
    {
         for (int g = 0; g<=2000; g++)
         {
             if (a[f][g] == 1)
             {
                 sum = sum + 1;
             }
         }
    }
    printf("%d\n", sum);
}
