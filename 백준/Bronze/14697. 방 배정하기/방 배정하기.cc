#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, total;
    int d = 0;
    cin >> a >> b >> c >> total;
    for (int i = 0; i<=total;i++)
    {
        for (int j = 0; j<=total;j++)
        {
            for (int h = 0; h<=total;h++)
            {
                if (a*i + b*j + c*h == total)
                {
                    d = '10';
                }
            }
        }
    }
    if (d =='10')
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
