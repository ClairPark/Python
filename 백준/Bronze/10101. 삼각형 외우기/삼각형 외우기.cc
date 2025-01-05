#include <cstdio>

int main()
{
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    if (a + b + c == 180)
    {
        if (a == 60 and b == 60)
        {
            printf("Equilateral");
        }
        else if(a == b or b == c or a == c)
        {
            printf("Isosceles");
        }
        else
        {
            printf("Scalene");
        }
    }
    else
    {
        printf("Error");
    }
}