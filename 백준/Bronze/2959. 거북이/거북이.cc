#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a[5];
    int sum = 0;
    scanf("%d %d %d %d", &a[1], &a[2], &a[3], & a[4]);
    sort(&a[1], &a[5]);
    sum = a[1] * a[3];
    printf("%d", sum);
}
