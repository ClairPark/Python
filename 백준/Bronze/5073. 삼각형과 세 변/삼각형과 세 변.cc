#include <iostream>

int main()
{
    int a, b, c;
    while(true)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 and b == 0 and c == 0)
        {
            break;
        }
        if (c < a + b and a < b + c and b < a + c)
        {
            if (a == b and b == c)
            {
                printf("Equilateral\n");
            }
            else if (a != b  and b != c and a != c)
            {
                printf("Scalene\n");
            }
            else
            {
                printf("Isosceles\n");
            }
        }
        else
        {
            printf("Invalid\n");
        }
    }
}