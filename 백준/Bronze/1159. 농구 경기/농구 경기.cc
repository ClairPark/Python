#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    int c[100] = {};
    cin >> a;
    string b;
    int sum = 0;
    for (int i = 1; i<=a; i++)
    {
        cin >> b;
        c[b[0] - 96] = c[b[0] - 96] +1;
    }

    for (int h = 1; h<=26; h++)
    {
        if (c[h] >= 5)
        {
            printf("%c", h+96);
            sum = sum + 1;
        }
    }
    if(sum == 0)
    {
        printf("PREDAJA");
    }
}

