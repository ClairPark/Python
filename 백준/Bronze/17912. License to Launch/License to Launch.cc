#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    scanf("%d", &a);
    int min1 = 999999;
    for (int i = 1; i<=a; i++)
    {
        scanf("%d", &b);
        if (b < min1)
        {
            min1 = b;
            c = i;
        }
    }
    printf("%d", c-1);
}
