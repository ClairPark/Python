#include <cstdio>

int main()
{
    int a;
    int sum = 0;
    scanf("%d", &a);
    for (int i = 1; i<=a; i++)
    {
        if (a%i == 0)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
}