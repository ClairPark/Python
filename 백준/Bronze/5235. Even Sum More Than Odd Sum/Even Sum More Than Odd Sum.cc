#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    scanf("%d", &a);
    for (int i = 1; i<=a; i++)
    {
        int even = 0;
        int odd = 0;
        scanf("%d", &b);
        for (int j = 1; j<=b; j++)
        {
            scanf("%d", &c);
            if (c%2 == 0)
            {
                even = even + c;
            }
            else
            {
                odd = odd + c;
            }
        }
        if (even > odd)
        {
            cout << "EVEN";
        }
        else if (odd > even)
        {
            cout << "ODD";
        }
        else
        {
            cout << "TIE";
        }
        printf("\n");
    }
}
