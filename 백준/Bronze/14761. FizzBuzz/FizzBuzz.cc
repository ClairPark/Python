#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    for (int i = 1; i<=c; i++)
    {
        if (i%a == 0 and i%b == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (i%a == 0)
        {
            printf("Fizz\n");
        }
        else if (i%b == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }
}
