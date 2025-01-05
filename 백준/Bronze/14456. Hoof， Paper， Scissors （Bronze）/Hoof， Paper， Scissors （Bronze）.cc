#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int cow1[150] = {}, cow2[150] = {};
    int a, total1 = 0, total2 = 0;
    cin >> a;
    for (int i = 1; i<=a; i++)
    {
        cin >> cow1[i] >> cow2[i];
    }
    for (int i = 1; i<=a; i++)
    {
        if (cow1[i] == 1)
        {
            if (cow2[i] == 2)
            {
                total1 = total1 + 1;
            }
        }
        else if (cow1[i] == 2)
        {
            if (cow2[i] == 3)
            {
                total1 = total1 + 1;
            }
        }
        else
        {
            if (cow2[i] == 1)
            {
                total1 = total1 + 1;
            }
        }
    }
    for (int i = 1; i<=a; i++)
    {
        if (cow1[i] == 1)
        {
            if (cow2[i] == 3)
            {
                total2 = total2 + 1;
            }
        }
        else if (cow1[i] == 2)
        {
            if (cow2[i] == 1)
            {
                total2 = total2 + 1;
            }
        }
        else
        {
            if (cow2[i] == 2)
            {
                total2 = total2 + 1;
            }
        }
    }
    cout << max(total1, total2);
}