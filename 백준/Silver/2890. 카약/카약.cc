#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    char total[55][55] = {};
    int ranking[52] = {};
    int row, column;
    cin >> row >> column;
    for(int i = 1; i<=row; i++)
    {
        for(int j= 1; j<=column; j++)
        {
            cin >>total[i][j];
        }
    }
    int s = 0;
    int rank = 1;
    for(int i = column-1; i>=2; i--)
    {
        for(int j = 1; j<=row; j++)
        {
            if(total[j][i] != '.' and ranking[(total[j][i])-48] == 0)
            {
                ranking[(total[j][i])-48] = rank;
                s = s + 1;
            }
        }
        if(s != 0)
        {
            rank = rank + 1;
        }
        s = 0;
    }
    for(int i = 1; i<=row; i++)
    {
        if(ranking[i] != 0)
        {
            cout << ranking[i] << endl;
        }
    }
}
