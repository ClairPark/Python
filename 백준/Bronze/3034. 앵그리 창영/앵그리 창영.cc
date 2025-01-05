#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c, num;
    int side = 0;
    scanf("%d %d %d", &a, &b, &c);
    for(int i = 1; i<=a; i++)
    {
        scanf("%d", &num);
        if (num*num <= b*b + c*c)
        {
            printf("DA\n");
        }
        else
        {
            printf("NE\n");
        }
    }
}