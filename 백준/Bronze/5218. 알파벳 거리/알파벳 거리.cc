#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    scanf("%d", &a);
    string b, c;
    for (int i = 1; i<=a; i++)
    {
        cin >> b >> c;
        printf("Distances: ");
        for (int j = 0; j <= b.size()-1; j++)
        {
            if (c[j] >= b[j])
            {
                printf("%d ", c[j] - b[j]);
            }
            else
            {
                printf("%d ", 26 - b[j] + c[j]);
            }
        }
        printf("\n");
    }
}