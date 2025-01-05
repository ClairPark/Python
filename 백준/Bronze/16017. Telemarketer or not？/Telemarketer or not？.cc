#include <cstdio>

int main()
{
    int a, b, c, d;
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    if ((a==9 or a==8) and (d==9 or d==8) and (b == c))
    {
        printf("ignore");
    }
    else
    {
        printf("answer");
    }
}