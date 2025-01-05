#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    int count = 0;
    cin >> a >> b;
    for(int i = 0; i<=a; i++)
    {
        for(int j = 0; j<=59; j++)
        {
            for(int h = 0; h<=59; h++)
            {
                if (i/10 == b or i%10 == b or j/10 == b or j%10 == b or h/10 == b or h%10 == b)
                {
                    count = count + 1;
                }
            }
        }
    }
    cout << count;
}