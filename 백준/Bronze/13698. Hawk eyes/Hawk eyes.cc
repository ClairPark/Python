#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a[4] ={1, 0, 0, 2};
    int c, d;
    string b;
    cin >> b;
    for (int i = 0; i<=b.size() -1; i++)
    {
        if (b[i] == 'A')
        {
            swap(a[0], a[1]);
        }
        else if (b[i] == 'B')
        {
            swap(a[0], a[2]);
        }
        else if (b[i] == 'C')
        {
            swap(a[0], a[3]);
        }
        else if (b[i] == 'D')
        {
            swap(a[1], a[2]);
        }
        else if (b[i] == 'E')
        {
            swap(a[1], a[3]);
        }
        else if (b[i] == 'F')
        {
            swap(a[2], a[3]);
        }
    }
    for (int j =  0; j<=3; j++)
    {
        if (a[j] == 1)
        {
            c = j;
        }
        else if (a[j] == 2)
        {
            d = j;
        }
    }
    printf("%d\n%d", c+1, d+1);
}
