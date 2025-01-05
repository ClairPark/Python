#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    int b[26] = {};
    cin >> a;
    for (int i = 0; i<=a.size()-1; i++)
    {
        b[a[i] - 97] = b[a[i] - 97] + 1;
    }
    for (int j = 0; j<=25; j++)
    {
        cout << b[j] << ' ';
    }
}
