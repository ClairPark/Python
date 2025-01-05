#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a, c;
    int b;
    int total = 0;
    cin >> a >> b;
    for (int i = 1; i<=b; i++)
    {
        int sum = 0;
        cin >> c;
        c = c + c;
        for (int j = 0; j<=c.size()-a.size()-1; j++)
        {
            if (c.substr(j, a.size()) == a)
            {
                sum = sum + 1;
            }
        }
        if (sum > 0)
        {
            total = total +1;
        }
    }
    cout << total;
}