#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    int b[150] = {};
    int c[150] = {};
    scanf("%d", &a);
    for (int i = 1; i<=a; i++)
    {
        scanf("%d", &b[i]);
        c[i] = b[i] * i;
        for (int j = 1; j<i; j++)
        {
            c[i] = c[i] - c[j];
        }
    }
    for (int h = 1; h<=a; h++)
    {
        printf("%d ", c[h]);
    }
}
