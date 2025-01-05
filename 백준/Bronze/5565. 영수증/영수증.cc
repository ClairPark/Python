#include <cstdio>

int main()
{
    int a, b;
    int sum = 0;
    scanf("%d", &a);
    for (int i = 1; i<=9; i++)
    {
        scanf("%d", &b);
        sum = sum + b;
    }
    printf("%d", a - sum);
}