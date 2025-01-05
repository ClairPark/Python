#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, c;
    int d = 0;
    int sum = 0;
    int b[1000] = {};
    scanf("%d", &a);
    for (int i = 1; i<=a; i++)
    {
        scanf("%d", &c);
        b[c] = b[c] + 1;
    }
    for (int k = 1; k<=100; k++)
    {
        if (b[k] >= 2)
        {
            sum = sum + b[k] - 1;
        }
    }
    printf("%d", sum);
}
