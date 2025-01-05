#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a[20];
    int max = 0;
    for (int i = 1; i<=8; i++)
    {
        scanf("%d", &a[i]);
        a[i+8] = a[i];
    }
    for (int j = 1; j <= 12; j++)
    {
        int sum = 0;
        sum = a[j] + a[j+1] + a[j+2] + a[j+3];
        if (sum >= max)
        {
            max = sum;
        }
    }
    printf("%d", max);
}