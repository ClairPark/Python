#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string b[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int c, d;
    scanf ("%d%d", &c, &d);
    int sum = d;
    for (int i = 0; i<=c-1; i++)
    {
        sum = sum + a[i];
    }
    cout << b[sum%7];
}
