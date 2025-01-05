#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    int sum = 0;
    int b[100] = {};
    scanf("%d", &a);
    for (int i = 1; i<=a; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int j = 1; j<=a; j++)
    {
        for (int h = 1; h<=a; h++)
        {
            for (int k = 1; k<=a; k++)
            {
                if (j != h and h != k and k != j)
                {
                    if ((b[j]-b[h])%b[k] == 0)
                    {
                        sum = sum + 1;
                    }
                    else
                    {
                        sum = -100000;
                    }
                }
            }
        }
    }
    if (sum>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
