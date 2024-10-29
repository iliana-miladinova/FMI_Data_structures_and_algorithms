// homework2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include "task01.h"
#include "task02.h"
using namespace std;

int main()
{
    //task 01
   /* short P;
    cin >> P;
    long long N;
    cin >> N;

    long long length = pow(3, P);

    for (long long i = 0; i < N; i++)
    {
        long long current;
        cin >> current;
        cout << ternarySearchRec(0, length - 1, current - 1, 1) << endl;
    }*/

    //task 02
    /*int N;
    int Q;
    cin >> N >> Q;

    vector<int> w(N);
    for (int i = 0; i < N; i++)
    {
        cin >> w[i];
    }

    sort(w.begin(), w.end());

    for (int i = 0; i < Q; i++)
    {
        int min;
        int max;
        cin >> min >> max;

        cout << std::max(0, countPlayers(w, min, max)) << endl;
    }*/

    //task 03
    int N;
    int T;
    cin >> N;
    cin >> T;
    vector<int> s(N);

    long long sum = 0;
    long long highest = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> s[i];
        sum += s[i];
        if (s[i] > highest)
        {
            highest = s[i];
        }
    }

    long long best = highest;
    long long left = best;
    long long right = sum;
    long long lastSuccededBest = 0;

    while (left <= right)
    {
        int currTeamsCount = 0;
        long long currTeamsSum = 0;
        for (int i = 0; i < N; i++)
        {
            if (s[i] + currTeamsSum > best)
            {
                currTeamsCount++;
                currTeamsSum = 0;
            }
            currTeamsSum += s[i];
        }
        if (currTeamsSum != 0)
        {
            currTeamsCount++;
        }
        if (currTeamsCount > T)
        {
            left = best + 1;
        }
        else
        {
            right = best - 1;
        }
        if (currTeamsCount == T)
        {
            lastSuccededBest = best;
        }
        best = left + (right - left) / 2;
    }
    cout << lastSuccededBest << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
