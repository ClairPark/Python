#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int b[2500] = {};
int num[2500] = {};
int main()
{
    int a;
    int min1 = 1000000000;
    scanf("%d", &a);
    for (int i = 1; i<=a; i++)
    {
        scanf("%d", &b[i]);
        b[i+a] = b[i];
    }
    for (int j = 1; j<=a; j++)
    {
        int sum = 0;
        for (int h = j; h<=j+a-1; h++)
        {
            sum = sum + b[h]*(h-j);
        }
        if (sum < min1)
        {
            min1 = sum;
        }
    }
    printf("%d", min1);
}
