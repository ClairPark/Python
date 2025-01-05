#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int b;
    int c = 0;
    string a;
    cin >> b >> a;
    int sum = 1;
    for (int i = 0; i<=a.size()-1; i++)
    {
        if (a[i] == 'S')
        {
            sum = sum + 1;
        }
        else if (a[i] == 'L')
        {
            c = c + 1;
            continue;
        }
    }
    sum = sum +(c/2);
    if (sum >= b)
    {
        cout << b;
    }
    else if (b > sum)
    {
        cout<< sum;
    }
}
