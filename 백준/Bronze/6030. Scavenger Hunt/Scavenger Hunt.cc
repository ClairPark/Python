#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = 1; i<=a; i++)
    {
        if (a%i == 0)
        {
            for (int j = 1; j<=b; j++)
            {
                if (b%j == 0)
                {
                    printf("%d %d\n", i, j);
                }
            }
        }
    }
}
