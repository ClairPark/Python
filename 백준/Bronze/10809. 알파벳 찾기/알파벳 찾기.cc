#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int b[30];
    for (int k = 0; k<=25; k++)
    {
        b[k] = -1;
    }
    string a;
    cin >> a;
    for (int i = 0; i<=a.size()-1; i++)
    {
        if (b[a[i]-97] == -1)
        {
            b[a[i]-97] = i;
        }
    }
    for (int h = 0; h<=25; h++)
    {
        cout << b[h] << ' ';
    }
}
