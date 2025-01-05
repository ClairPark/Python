#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    int d[10] = {};
    scanf("%d%d", &a, &b);
    int arr[500][500] = {};
    for(int i = 1; i<=a; i++)
    {
        for(int j = 1; j<=b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &c);
    for (int h = 1; h<=c; h++)
    {
        int sum = 0;
        for (int k = 1; k<=4; k++)
        {
            scanf("%d", &d[k]);
        }
        for (int t = d[1]; t<=d[3];t++)
        {
            for (int n = d[2]; n<=d[4]; n++)
            {
                sum = sum + arr[t][n];
            }
        }
        printf("%d\n", sum);
    }
}
