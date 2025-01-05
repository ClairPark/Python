#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, coordinate[100100] = {}, color[100100] = {};
    int min1 = 111111, sum = 0;
    cin >> a;
    for (int i = 1; i<=a; i++)
    {
        cin >> coordinate[i];
        cin >> color[i];
    }
    for (int i = 1; i<=a; i++)
    {
        int min1 = 111111;
        for (int j = 1; j<=a; j++)
        {
            if (i!=j)
            {
                if (color[i] == color[j])
                {
                    if (abs(coordinate[j] - coordinate[i]) < min1)
                    {
                        min1 = abs(coordinate[j] - coordinate[i]);
                    }
                }
            }
        }
        sum = sum + min1;
    }
    cout << sum;
}