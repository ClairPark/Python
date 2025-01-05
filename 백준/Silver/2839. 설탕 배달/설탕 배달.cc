#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int min = 100000;
    int a;
    scanf("%d", &a);
    for (int i = 0; i<=1000; i++)
    {
        for (int j = 0; j<=1000; j++)
        {
            if (3*i + 5*j == a)
            {
                if (i + j <= min)
                {
                    min = i + j;
                }
            }
        }
    }
    if (min == 100000)
    {
        min = -1;
    }
    printf("%d", min);
}
