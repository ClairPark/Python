#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int c[2020][2020] = {};
int main()
{
    int a;
    int b[10] = {};
    int d[150] = {};
    int m = 0;
    scanf("%d", &a);
    for (int i = 1; i<=a; i++)
    {
        for(int j = 1; j<=4; j++)
        {
            scanf("%d", &b[j]);
        }
        for (int h = b[1]; h<=(b[1] + b[3] - 1); h++)
        {
            for (int k = b[2]; k<=(b[2] +b[4] - 1); k++)
            {
                c[h][k] = i;
            }
        }
    }
    for (int f = 0; f<=1001; f++)
    {
        for(int g = 0; g<=1001; g++)
        {
            d[c[f][g]] = d[c[f][g]] + 1;
        }
    }
    for (int j = 1; j<=a; j++)
    {
        printf("%d\n", d[j]);
    }
}
