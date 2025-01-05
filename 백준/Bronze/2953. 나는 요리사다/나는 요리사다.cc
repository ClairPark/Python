#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b;
    int max = 0;
    for (int i = 1; i<=5; i++)
    {
        int sum = 0;
        for (int j = 1; j<=4; j++)
        {
            scanf("%d", &a);
            sum  = sum + a;
        }
        if (max <= sum)
        {
            max = sum;
            b = i;
        }
    }


    printf("%d %d", b, max);

}
