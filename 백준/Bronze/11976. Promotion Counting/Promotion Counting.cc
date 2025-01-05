#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a[10] = {};
    int b[10] = {};
    int c[10] = {};
    for (int i = 1; i<=4; i++)
    {
        scanf("%d%d", &a[i], &b[i]);
    }
    for (int i = 2; i<=4; i++)
    {
        for (int j = 4; j>=i; j--)
        {
            c[i] = c[i] + b[j] - a[j];
        }
    }
    for (int i = 2; i<=4; i++)
    {
        cout << c[i] << ' ';
    }
}