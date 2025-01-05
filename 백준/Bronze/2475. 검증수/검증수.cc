#include <cstdio>

int main()
{
    int a;
    int sum = 0;
    for (int i = 1; i<=5; i++)
    {
        scanf("%d", &a);
        sum = sum + a*a;
    }
    printf("%d", sum%10);
}