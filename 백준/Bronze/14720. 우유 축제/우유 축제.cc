#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    int b[1000] = {};
    int sum = 0;
    int m = 0;
    scanf("%d", &a);
    for (int i = 0; i<=a-1; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int j = 0; j<=a-1; j++)
    {
        if (b[j] == m%3)
        {
            sum = sum + 1;
            m = m + 1;
        }
    }
    printf("%d", sum);
}
