// Online C++ compiler to run C++ program online
#include <iostream>

int main()
{
    int a, b;
    while(true)
    {
        scanf("%d %d", &a, &b);
        if (a == 0 and b == 0)
        {
            break;
        }
        else if (a>b)
        {
            printf("Yes\n");
        }
        else 
        {
            printf("No\n");
        }
    }
}