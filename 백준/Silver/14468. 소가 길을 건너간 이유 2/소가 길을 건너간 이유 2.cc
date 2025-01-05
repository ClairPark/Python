#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int total = 0;
    for (int i = 0; i<=51; i++)
    {
        for (int j = 0; j<=51; j++)
        {
            if (i < j)
            {
                if (a[i] == a[j])
                {
                    int sum = 0;
                    for (int h = i+1; h<=j-1; h++)
                    {
                        for (int k = i+1; k<=j-1; k++)
                        {
                            if (h < k)
                            {
                                if (a[h] == a[k])
                                {
                                    sum = sum + 2;
                                }
                                
                            }
                        }
                    }
                    total = total + (j-i-1-sum);
                }
            }
        }
    }
    cout << total/2;
}