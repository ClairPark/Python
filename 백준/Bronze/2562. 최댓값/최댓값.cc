#include <cstdio>

int main()
{
    int a;
    int max = 0;
    int num = 0;
    for(int i = 1; i<=9; i++)
    {
        scanf("%d", &a);
        if (max < a)
        {
            max = a;
        }
        if (max == a)
        {
            num = i;
        }
    }
    printf("%d\n%d", max, num);
}