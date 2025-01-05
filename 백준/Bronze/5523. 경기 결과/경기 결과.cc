#include <cstdio>

int main()
{
    int a, b, c;
    int A = 0;
    int B = 0;
    scanf("%d", &a);
    for(int i = 1; i<=a; i++)
    {
        scanf("%d %d", &b, &c);
        if (b>c)
        {
            A = A + 1;
        }
        else if(c>b)
        {
            B = B + 1;
        }
    }
    printf("%d %d", A, B);
}