#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int bulls, cows;
    cin >> bulls >> cows; // number of bulls and cows
    string dna[50] = {}; // DNA sequence of both bulls and cows
    int num[30][30] = {}; //google docs #6021
    int s = 0; 
    for (int i = 1; i<=bulls+cows; i++) //getting DNA sequence => np
    {
        cin >> dna[i];
    }
    for (int i = 1; i<=bulls; i++) 
    {
        for (int j = 1; j<=cows; j++) //i번째 bull and j번째 cow 
        {
            for (int h = 1; h<=bulls + cows; h++) //DNA sequence = both bull and cow
            {   
                if(h!=i and h!=bulls + j)// DNA sequence of child != parent (parent can't be child)
                {
                    for(int k = 0; k<=dna[h].size()-1; k++) // Each letter of DNA
                    {
                        if (dna[h][k] == dna[i][k] or dna[h][k] == dna[bulls+j][k]) // Need same position sequence
                        {
                            s = s + 1;
                        }
                        else // If even one letter different, can't be parent
                        {
                            s = 100;
                            break;
                        }
                    }
                    if(s != 100) 
                    {
                        num[i][j] = num[i][j] + 1; // __ bulls/cows = possible child of ith bull and jth cow
                    }
                    s = 0;
                }
            }
        }
    }
    for (int i = 1; i<=bulls; i++)
    {
        for (int j = 1; j<=cows; j++)
        {
            cout << num[i][j] << ' '; 
        }
        cout << '\n';
    }
}