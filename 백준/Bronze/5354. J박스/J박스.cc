#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    scanf("%d", &a);
    for (int i = 1; i<=a; i++)
    {
        scanf("%d", &b);
        for (int j = 1; j<=b; j++)
        {
            for (int h = 1; h<=b; h++)
            {
                if (j == 1 or j == b or h == 1 or h == b)
                {
                    printf("#");
                }
                else
                {
                    printf("J");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}
