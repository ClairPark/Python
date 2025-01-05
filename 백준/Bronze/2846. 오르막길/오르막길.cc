#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, route[1010] = {}, max1 = 0, sum = 0;
    cin >> a;
    for (int i = 1; i<=a; i++)
    {
        cin >> route[i];
    }
    for (int i = 1; i<=a-1; i++)
    {
        if (route[i+1] > route[i])
        {
            sum = sum + route[i+1] - route[i];
        }
        else
        {
            if (sum > max1)
            {
                max1 = sum;
            }
            sum = 0;
        }
        if (sum > max1)
        {
            max1 = sum;
        }
    }
    cout << max1;
}