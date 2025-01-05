#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    cin >> a;
    for (int i = 0; i<=a.size()-1; i++)
    {
        if (a[i] != 'C' and a[i] != 'A' and a[i] != 'M' and a[i] != 'B' and a[i] != 'R' and a[i] != 'I' and a[i] != 'D' and a[i] != 'G' and a[i] != 'E')
        {
            cout << a[i];
        }
    }
}
