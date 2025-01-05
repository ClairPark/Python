#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int num, possible;
    int eachnum[10010] = {};
    cin >> num >> possible;
    for (int i = 1; i<=num; i++)
    {
        cin >> eachnum[i];
    }
int all = 0;
    for (int i = 1; i<=num; i++)
    {
        int total = 0;
        for(int j = i; j<=num; j++)
        {
            total = total + eachnum[j];
            if (total == possible)
            {
                all = all + 1;
                break;
            }
            else if(total > possible)
            {
                break;
            }
        }
    }
    cout << all;
}
