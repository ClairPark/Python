#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int left = 1;
    int middle = 0;
    int right = 0;
    string a;
    cin >> a;
    for (int i = 0; i<=a.size()-1; i++)
    {
        if (a[i] == 'A')
        {
            swap(left, middle);
        }
        else if (a[i] == 'B')
        {
            swap(middle, right);
        }
        else if (a[i] == 'C')
        {
            swap(right, left);
        }
    }
    if (right == 1)
    {
        printf("%d", 3);
    }
    else if (middle == 1)
    {
        printf("%d", 2);
    }
    else if (left == 1)
    {
        printf("%d", 1);
    }
}
