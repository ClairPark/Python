#include <cstdio>

int main()
{
    int a, num;
    int min = 1000000;
    int max = -1000000;
    scanf("%d", &a);
    for (int i = 1; i<=a; i++)
    {
        scanf("%d", &num);
        if (max<=num)
        {
            max = num;
        }
        if (min>=num)
        {
            min = num;
        }
    }
    printf("%d %d", min, max);
}