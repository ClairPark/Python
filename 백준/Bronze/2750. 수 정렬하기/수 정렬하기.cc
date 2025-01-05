#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a[10000];
    int b;
    scanf("%d", &b);
    for (int i = 1; i<=b; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(&a[1], &a[b+1]);
    for(int j = 1; j<=b; j++)
    {
        printf("%d\n", a[j]);
    }
}