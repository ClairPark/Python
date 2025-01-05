#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int max = -1;
    int sum = 0;
    int c[30] = {};
    for (int i = 0; i<=a.size() - 1; i++)
    {
        if (a[i] <= 90)
        {
            c[a[i]-65] = c[a[i]-65] + 1;
        }
        else
        {
            c[a[i]-97] = c[a[i]-97] + 1;
        }
    }
    for (int j = 0; j<=25; j++)
    {
        if (c[j] > max)
        {
            max = c[j];
        }
    }
    for (int h = 0; h<=25; h++)
    {
        if (c[h] == max)
        {
            sum = sum + 1;
        }
    }
    if (sum >= 2)
    {
        printf("?");
    }
    else
    {
       for (int k = 0; k<=25; k++)
        {
            if (c[k] == max)
            {
                printf("%c", k + 65);
            }
        }
    }
}
