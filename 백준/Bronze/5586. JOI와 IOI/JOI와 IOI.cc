#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int sum1 = 0;
    int sum2 = 0;
    string a;
    cin >> a;
    for (int i = 0; i<=a.size()-3; i++)
    {
        if (a[i] == 'J' and a[i+1] == 'O' and a[i+2] == 'I')
        {
            sum1 = sum1 + 1;
        }
        else if (a[i] == 'I' and a[i+1] == 'O' and a[i+2] == 'I')
        {
            sum2 = sum2 + 1;
        }
    }
    printf("%d\n%d", sum1, sum2);
}
