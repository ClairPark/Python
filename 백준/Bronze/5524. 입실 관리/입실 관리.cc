#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    string b;
    scanf("%d", &a);
    for (int i = 1; i<=a; i++)
    {
        cin >> b;
        for (int j = 0; j <= b.size()-1; j++)
        {
            if (97 <= b[j] and b[j] <= 122)
            {
                printf("%c", b[j]);
            }
            else
            {
                b[j] = b[j] + 32;
                printf("%c", b[j]);
            }
        }
        printf("\n");
    }
}
