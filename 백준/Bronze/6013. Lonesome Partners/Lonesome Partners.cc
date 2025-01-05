#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, num1, num2;
    int x[600] = {};
    int y[600] = {};
    int maxm = 0;
    cin >> a;
    for (int i = 1; i<=a; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int j = 1; j<=a; j++)
    {
        for (int h = 1; h<=a; h++)
        {
            if ((x[j] - x[h])*(x[j] - x[h]) + (y[j] - y[h])*(y[j] - y[h]) > maxm)
            {
                maxm = (x[j] - x[h])*(x[j] - x[h]) + (y[j] - y[h])*(y[j] - y[h]);
                num1 = j;
                num2 = h;
            }
        }
    }
    printf("%d %d", num1, num2);
}
