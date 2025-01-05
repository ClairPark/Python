#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int use[1010] = {};
int main()
{
    int a;
    int total = 0;
    int start[150] = {};
    int finish[150] = {};
    int num[150] = {};
    int max1 = 0;
    scanf("%d", &a);
    for(int i = 1; i<=a; i++)
    {
        scanf("%d%d%d", &start[i], &finish[i], &num[i]);
        for (int j = start[i]; j<=finish[i]-1; j++)
        {
            use[j] = use[j] + num[i];
        }
    }
    for (int h = 1; h<=1000; h++)
    {
        if (use[h]>max1)
        {
            max1 = use[h];
        }
    }
    printf("%d", max1);
}
