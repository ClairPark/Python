#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int num, amount, sum = 0;
    string name;
    int min1 = 999999999, min2 = 999999999, c;
    string a[10] = {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};
    int b[10] = {};
    scanf("%d", &num);
    for (int i = 1 ; i<=num; i++)
    {
        cin >> name >> amount;
        for (int j = 0; j<=6; j++)
        {
            if (a[j] == name)
            {
                b[j] = b[j] + amount;
            }
        }
    }
    for (int i = 0; i<=6; i++)
    {
        if (b[i] < min1)
        {
            min1 = b[i];
        }
    }
    for (int i = 0; i<=6; i++)
    {
        if (b[i] != min1)
        {
            if (b[i] < min2)
            {
                min2 = b[i];
                c = i;
            }
        }
    }
    for (int i = 0; i<=6; i++)
    {
        if (b[i] == min2)
        {
            sum = sum + 1;
        }
    }
    if (sum != 1)
    {
        cout << "Tie";
    }
    else
    {
        cout << a[c];
    }
}
