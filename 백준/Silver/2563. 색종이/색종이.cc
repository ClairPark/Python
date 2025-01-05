#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    int sum = 0;
    int arr[100][100] = {};
    for (int i = 1; i<=a; i++)
    {
        scanf("%d %d", &b, &c);
        for (int j = b; j<= b + 9; j++)
        {
            for (int h = c; h<= c + 9; h++)
            {
                arr[j][h] = 1;
            }
        }
    }
    for(int n = 0; n<=99; n++)
    {
        for(int m = 0; m<=99; m++)
        {
            if (arr[n][m] == 1)
            {
                sum = sum + 1;
            }
        }
    }
    printf("%d", sum);
}
