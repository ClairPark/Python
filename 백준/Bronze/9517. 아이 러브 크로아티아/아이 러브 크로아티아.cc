#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int num[20] = {};
    int a, b, c, e = 1, f = 0, ans;
    char d;
    scanf("%d%d", &a, &b);
    for (int i = 1; i<=2*b; i++)
    {
        num[i] = (a+i-2)%8 + 1;
    }
    for (int i = 1; i<=b; i++)
    {
        cin >> c >> d;
        f = f + c;
        if (f >= 210)
        {
            cout << num[e];
            return 0;
        }
        if (d == 'T')
        {
            e = e + 1;
        }
    }
}
