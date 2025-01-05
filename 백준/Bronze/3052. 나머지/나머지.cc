#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a[100] = {};
    int b;
    int c[50] = {};
    int sum = 0;
    for (int i = 1; i<=10; i++)
    {
        scanf("%d", &b);
        a[i] = b%42;
    }
    for (int j = 1; j<=10; j++)
    {
        c[a[j]] =1;
    }
    for (int h = 0; h<=41; h++)
    {
        if (c[h] == 1)
        {
            sum = sum + 1;
        }
    }
    printf("%d", sum);
}
