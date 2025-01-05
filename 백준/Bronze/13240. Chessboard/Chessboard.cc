#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = 1; i<=a; i++)
    {
        for (int j = 1; j<=b; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    printf("*");
                }
                else
                {
                    printf(".");
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    printf(".");
                }
                else
                {
                    printf("*");
                }
            }
        }
        printf("\n");
    }
}