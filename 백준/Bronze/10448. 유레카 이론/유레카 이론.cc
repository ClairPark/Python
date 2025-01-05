#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    int b;
    scanf("%d", &a);
    for (int t = 1; t<=a; t++)
    {
        int cnt = 0;
        cin >> b;
        for (int j = 1; j<=50; j++)
        {
            for(int h = 1; h<=50; h++)
            {
                for (int k = 1; k<=50; k++)
                {
                    if ((j*(j+1)/2)+(h*(h+1)/2)+(k*(k+1)/2) == b)
                    {
                        cnt = cnt+1;
                    }
                }
            }
        }
        if (cnt == 0)
        {
            printf("%d\n", 0);
        }
        else
        {
            printf("%d\n", 1);
        }
    }
}
