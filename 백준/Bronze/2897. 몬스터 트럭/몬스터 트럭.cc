#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int length, width;
    cin >> length >> width;
    char parking[60][60] ={};
    int space[5] = {};
    for(int i = 1; i<=length; i++)
    {
        for (int j = 1; j<=width; j++)
        {
            cin >> parking[i][j];
        }
    }
    for(int i = 1; i<=length - 1; i++)
    {
        for (int j = 1; j<=width - 1; j++)
        {
            int s = 0;
            int v = 0;
            for (int h = i; h<=i+1; h++)
            {
                for (int k = j; k<=j+1; k++)
                {
                    if (parking[h][k] != '#')
                    {
                        s = s + 1;
                    }
                    if (parking[h][k] == 'X')
                    {
                        v = v + 1;
                    }
                }
            }
            if (s == 4)
            {
                space[v] = space[v] + 1;
            }
        }
    }
    for (int i = 0; i<=4; i++)
    {
        cout << space[i] <<'\n';
    }
}