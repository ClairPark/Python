#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, weight[100] = {}, height[100] = {}, num[100] = {};
    cin >> a;
    for (int i= 1; i<=a; i++)
    {
        cin >> weight[i] >> height[i];
    }
    for (int i= 1; i<=a; i++)
    {
        int sum1 = 0, sum2 = 0;
        for (int j = 1; j<=a; j++)
        {
            if (weight[i] < weight[j] or height[i] < height[j])
            {
                sum1 = sum1 + 1;
            }
            if (weight[i] < weight[j] and height[i] < height[j])
            {
                sum2 = sum2 + 1;
            }
        }
        num[i] = min(sum1, sum2);
        num[i] = num[i] + 1;
    }
    for (int i= 1; i<=a; i++)
    {
        cout << num[i] << ' ';
    }
}