#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int a[1000] = {};
    int b, c;
    int sum = 0;
    for (int i = 1; i<=3; i++)
    {
        cin >> b >> c;
        for (int j = b; j<=c-1; j++)
        {
            a[j] = a[j] + 1;
        }
    }
    for (int k = 1; k<=100; k++)
    {
        if (a[k] == 1)
        {
            sum = sum + A;
        }
        else if (a[k] == 2)
        {
            sum = sum + 2*B;
        }
        else if (a[k] == 3)
        {
            sum = sum + 3*C;
        }
    }
    cout << sum;
}
