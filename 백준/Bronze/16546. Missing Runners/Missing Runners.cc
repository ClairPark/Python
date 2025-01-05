#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, c;
    int b[100000] = {};
    scanf("%d", &a);
    for (int i = 1; i<=a-1; i++)
    {
        scanf("%d", &c);
        b[c] = 1;
    }
    for (int j = 1; j<=a; j++)
    {
        if (b[j] == 0)
        {
            printf("%d", j);
        }
    }
}
