#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    if (a == c)
    {
        printf("%d ", e);
    }
    else if (a == e)
    {
        printf("%d ", c);
    }
    else if (e == c)
    {
        printf("%d ", a);
    }
    if (b == d)
    {
        printf("%d", f);
    }
    else if (b == f)
    {
        printf("%d", d);
    }
    else if (d == f)
    {
        printf("%d", b);
    }
}
