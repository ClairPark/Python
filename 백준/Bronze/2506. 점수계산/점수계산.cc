#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    int c = 0;
    int sum = 0;
    scanf("%d", &a);
    for (int i = 1; i<=a; i++)
    {
        cin >> b;
        if (b == 0)
        {
            c = 0;
        }
        else if (b == 1)
        {
            c = c + 1;
            sum = sum + c;
        }
    }
    printf("%d", sum);
}
