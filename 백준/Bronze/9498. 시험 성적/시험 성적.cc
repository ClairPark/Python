#include <cstdio>

int main()
{
    int a;
    scanf("%d", &a);
    if (90<=a and a<=100)
    {
        printf("A");
    }
    else if (80<=a and a<=89)
    {
        printf("B");
    }
    else if (70<=a and a<=79)
    {
        printf("C");
    }
    else if (60<=a and a<=69)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
}