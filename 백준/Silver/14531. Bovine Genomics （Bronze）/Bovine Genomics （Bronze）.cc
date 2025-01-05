#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    char c[101][101] = {};
    char d[101][101] = {};
    int total = 0;
    cin >> a >> b;
    for (int i = 1; i<=a; i++)
    {
      for (int j = 1; j<=b; j++)
      {
        cin >> c[i][j];
      }
    }
    for (int i = 1; i<=a; i++)
    {
      for (int j = 1; j<=b; j++)
      {
        cin >> d[i][j];
      }
    }
    for (int h = 1; h<=b; h++)
    {
      int sum = 0;
      for (int i= 1; i<=a; i++)
      {
        for (int j= 1; j<=a; j++)
        {
          if (c[i][h] != d[j][h])
          {
            sum = sum + 1;
          }
        }
      }
      if (sum == a*a)
      {
        total = total + 1;
      }
    }
    cout << total;
}
