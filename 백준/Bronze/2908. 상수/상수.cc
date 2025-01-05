#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    c = ((a%10) * 100) + (((a/10)%10)*10) + a/100;
    d = ((b%10) * 100) + (((b/10)%10)*10) + b/100;
    if (c > d)
    {
        printf("%d", c);
    }
    else
    {
        printf("%d", d);
    }
}
