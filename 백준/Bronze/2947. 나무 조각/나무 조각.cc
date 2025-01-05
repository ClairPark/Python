#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a[10] = {};
    for (int i = 1; i<=5; i++)
    {
      cin >> a[i]; 
    }
    while (true)
    {
      int b = 0;
      for (int i = 1; i<=4; i++)
      {
        if (a[i] > a[i+1])
        {
          swap (a[i], a[i+1]);
          for (int j = 1; j<=5; j++)
          {
            cout <<a[j] << ' ';
          }
          printf("\n");
        }
        else
        {
          b = b + 1;
        }
      }
      if (b == 4)
      {
        return 0;
      }
    }
}
