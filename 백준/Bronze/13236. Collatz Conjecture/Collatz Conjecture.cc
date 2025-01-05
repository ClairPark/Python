#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d ", a);
    while(a != 1)
    {
        if (a%2 == 0)
        {
            a = a/2;
            printf("%d ", a);
        }
        else
        {
            a = (a*3) + 1;
            printf("%d ", a);
        }
    }
}
