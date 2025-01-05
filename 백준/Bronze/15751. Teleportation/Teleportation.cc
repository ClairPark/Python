#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, x, y;
    scanf("%d %d %d %d", &a, &b, &x, &y);
    cout << min(abs(b-a), min(abs(a-x) + abs(y-b), abs(a-y) + abs(x-b)));
}
