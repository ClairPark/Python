#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    int b[150] = {};
    int c[150] = {};
    int d[150] = {};
    int stone[5] = {};
    int max1 = -1;
    scanf("%d", &a);
    for (int i = 1; i<=a; i++)
    {
        scanf("%d%d%d", &b[i], &c[i], &d[i]);
    }
    for (int j = 1; j<=3; j++)
    {
        int stone[5] = {};
        stone[j] = 1;
        int sum = 0;
        for (int h = 1; h<=a; h++)
        {
            swap(stone[b[h]], stone[c[h]]);
            if (stone[d[h]] == 1)
            {
                sum = sum + 1;
            }
        }
        if (sum > max1)
        {
            max1 = sum;

        }
    }
    printf("%d", max1);
}
