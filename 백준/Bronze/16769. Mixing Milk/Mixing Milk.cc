#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int maxm[3], cur[3];
    for (int i = 0; i<3; i++)
    {
        cin >> maxm[i] >> cur[i];
    }
    for (int j = 0; j< 100; j++)
    {
        int here = j%3;
        int pour = (j + 1)%3;
        if (cur[pour] + cur[here] <= maxm[pour])
        {
            cur[pour] = cur[pour] + cur[here];
            cur[here] = 0;
        }
        else
        {
            cur[here] = cur[here] - (maxm[pour] - cur[pour]);
            cur[pour] = maxm[pour];
        }
    }
    printf("%d\n%d\n%d", cur[0], cur[1], cur[2]);
}
