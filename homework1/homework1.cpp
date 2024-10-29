// homework1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include "task01.h"
#include "task02.h"
#include "task03.h"

int main()
{
	//task 01
    /*int N;
    cin >> N;

    vector<char> symbs(N);
    for (int i = 0; i < N; i++)
    {
        cin >> symbs[i];
    }

    vector<int> count(MAX_AI, 0);
    vector<int> output(N);

    for (int i = 0; i < N; i++)
    {
        count[getNumBySymbol(symbs[i])]++;
    }

    for (int i = 1; i < MAX_AI; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = N - 1; i >= 0; i--)
    {
        int ind = getNumBySymbol(symbs[i]);
        output[count[ind] - 1] = symbs[i];
        count[ind]--;
    }

    for (int i = 0; i < N; i++)
    {
        symbs[i] = output[i];
    }

    for (int i = 0; i < N; i++)
    {
        cout << symbs[i];
    }*/

    //task 02
    /*int N;
    cin >> N;

    vector<int> arr(N);
    vector<double> medians(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        medians[i] = getMedian(arr, i + 1);
    }

    for (int i = 0; i < N; i++)
    {
        cout << medians[i] << endl;
    }*/

    //task 03
    int N;
    cin >> N;

    vector<pair<string, int>> res(N);
    for (int i = 0; i < N; i++)
    {
        cin >> res[i].first;
    }

    for (int i = 0; i < N; i++)
    {
        cin >> res[i].second;
    }

    quick_sort(res, 0, N - 1);
    for (int i = 0; i < N; i++)
    {
        cout << res[i].first << " " << res[i].second << endl;
    }
    return 0;
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
