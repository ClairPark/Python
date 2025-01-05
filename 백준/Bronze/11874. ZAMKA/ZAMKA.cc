#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int min, max, sum;
    cin >> min >> max >> sum;
    int s = 0, v = 0;
    int min1 = 9999999, max1 = -1;
    for(int i = min; i<=max; i++)
    {
        v = i;
        s = s + v/10000;
        v = v - (v/10000) * 10000;
        s = s + v/1000;
        v = v - (v/1000) * 1000;
        s = s + v/100;
        v = v - (v/100) * 100;
        s = s + v/10;
        v = v - (v/10) * 10;
        s = s + v%10;
        if (s == sum)
        {
            if(i<min1)
            {
                min1 = i;
            }
            if(i>max1)
            {
                max1 = i;
            }
        }
        s = 0;
    }
    cout << min1 << '\n' << max1;
}