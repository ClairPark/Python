#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a[10];
    int sum = 0;
    for(int j = 1; j<=8; j++)
    {
        scanf("%d", &a[j]);
    }
    for(int i = 1; i<=7; i++)

    {
        if (a[i+1]-a[i] == 1)
        {
            sum = sum +1;
        }
        else if (a[i+1]-a[i] == -1)
        {
            sum = sum + 2;
        }
        else
        {
            sum = 100;
        }
    }
    if (sum == 7)
    {
        printf("ascending");
    }
    else if (sum == 14)
    {
        printf("descending");
    }
    else
    {
        printf("mixed");
    }
}
