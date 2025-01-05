#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h, min1,min2, max1, max2;
    scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
    min1 = min(min(a, c), min(e, g));
    max1 = max(max(a, c), max(e, g));
    min2 = min(min(b, d), min(f, h));
    max2 = max(max(b, d), max(f, h));
    cout << max(max1 - min1, max2 - min2) * max(max1 - min1, max2 - min2);
}
