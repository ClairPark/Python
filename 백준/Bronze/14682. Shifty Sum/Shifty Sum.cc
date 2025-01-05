#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int sum = a;
    for (int i = 1; i<=b; i++)
    {
        a = a *10;
        sum = sum + a;
    }
    printf("%d", sum);
}
