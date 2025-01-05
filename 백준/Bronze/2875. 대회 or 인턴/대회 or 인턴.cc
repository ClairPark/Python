#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    int max1 = -1;
    cin >> a >> b >> c;
    for (int i = 0; i<=c; i++)
    {
        for (int j = 0; j<=c; j++)
        {
            if (i + j == c)
            {
                if (min((a-i)/2,b-j) > max1)
                {
                    max1 = min((a-i)/2,b-j);
                }
            }
        }
    }
    cout << max1;
}
