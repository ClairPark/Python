#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    scanf("%d", &a);
    for (int i = 1; i<=a; i++)
    {
        int min1 = 10000000;
        int max1 = -10000000;
        scanf("%d", &b);
        for (int j = 1; j<=b; j++)
        {
            scanf("%d", &c);
            if (c < min1)
            {
            
                min1 = c;
            }
            if (c > max1)
            {
                max1 = c;
            }
        }
        printf("%d %d \n", min1, max1);
    }
}
