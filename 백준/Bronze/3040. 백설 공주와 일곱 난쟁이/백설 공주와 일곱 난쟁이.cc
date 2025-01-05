#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a[10];
    int sum = 0;
    for (int i = 1; i<=9; i++)
    {
        cin >> a[i];
    }
    for (int j = 1; j <= 9; j++)
    {
        sum = sum + a[j];
    }
    sum = sum - 100;
    for (int h = 1; h <= 9; h++)
    {
        for (int k = 1; k<= 9; k++)
        {
            if (h != k)
            {
                if(a[h] + a[k] == sum)
                {
                    for (int t = 1; t<=9; t++)
                    {
                        if (t != h and t!= k)
                        {
                            printf("%d\n", a[t]);
                        }
                    }
                    return 0;
                }
            }
        }
    }
}
