#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, max1 = -1;
    string b[1010][5] = {};
    cin >> a;
    for (int i = 1; i<=a; i++)
    {
        cin >> b[i][1] >> b[i][2] >> b[i][3];
    }
    for (int i = 1; i<=a; i++)
    {
        int total = 0;
        for (int k = 1; k<=a; k++)
        {
            if (k != i)
            {
                int sum = 0;
                for (int j = 1; j<=3; j++)
                {
                    for (int h = 1; h<=3; h++)
                    {
                        if (b[i][j] == b[k][h])
                        {
                            sum = sum +1;
                        }
                    }
                    if (sum == 3)
                    {
                        total = total + 1;
                    }
                }      
            }
        }
        if (total > max1)
        {
            max1 = total;
        }
    }
    cout << max1+1;
}