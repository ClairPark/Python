#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    cin >> a;
    cout << a[0];
    for (int i = 0; i <= a.size()-1; i++)
    {
        if (a[i - 1] == '-')
        {
            cout << a[i];
        }
    }
}
