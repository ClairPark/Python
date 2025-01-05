#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    int sum = 0;
    for (int i = 1; i<=5; i++)
    {
        cin >> a;
        for (int j= 0; j <= a.size()-3; j++)
        {
            if (a[j] == 'F' and a[j+1] == 'B' and a[j+2] == 'I')
            {
                sum = sum +1;
                cout << i << ' ';
                break;
            }
        }
    }
    if (sum == 0)
    {
        cout << "HE GOT AWAY!";
    }
}
