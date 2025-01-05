#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d;
    int sum = 0;
    int e[1000] = {};
    scanf("%d %d %d %d", &a, &b, &c, &d);
    for (int i = a; i<=b-1; i++)
    {
        e[i] = 1;
    }
    for (int j = c; j<=d-1; j++)
    {
        e[j] = 1;
    }
    for(int k = 0; k<=999; k++)
    {
        if(e[k] == 1)
        {
            sum = sum + 1;
        }
    }
    printf("%d", sum);
}
