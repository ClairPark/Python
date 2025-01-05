#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    int sum = 0;
    string b;
    scanf("%d", &a);
    for (int i = 1; i<=a; i++)
    {
        cin >> b;
        int c = 0;
        for (int j = 0; j <= b.size()-1; j++)
        {
            if (b[j] == 'O')
            {
                c = c+1;
                sum = sum + c;
            }
            else
            {
                c = 0;
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }


}