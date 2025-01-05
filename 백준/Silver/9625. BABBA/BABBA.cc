#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    int b[9999] = {};
    int c[9999] = {};
    cin >> a;
    b[1] = 0;
    c[1] = 1;
    b[2] = 1;
    c[2] = 1;
    b[3] = 1;
    c[3] = 2;
    for (int i = 4; i<=a; i++)
    {
        b[i] = b[i-1] + b[i-2];
        c[i] = c[i-1] + c[i-2];
    }
    cout << b[a] << ' ' << c[a];
}