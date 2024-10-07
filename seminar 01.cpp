
// seminar 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    //task 01
    /*int N;
    int K;

    cin >> N;
    cin >> K;

    vector<int> vec(N);

    for (int i = 0; i < N; i++)
    {
        cin >> vec[i];
    }

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i]==K)
        {
            vec.erase(vec.begin() + i);
            i--;
        }
    }

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }*/

    //task 02
    /*int N;
    cin >> N;

    vector<int> vec(N);

    for (int i = 0; i < N; i++)
    {
        std::cin >> vec[i];
    }

    for (int i = vec.size()-1; i >= 0; i--)
    {
        vec[i] += 1;
        if (vec[i]<=9)
        {
            break;
        }

        vec[i] = 0;
    }

    if (vec[0]==0)
    {
        vec.insert(vec.begin(), 1);
    }

    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it;
    }*/

    //task 02
    int N;
    int K;

    cin >> N;
    cin >> K;
    
    vector<pair<int, int>> vec(N);
    for (int i = 0; i < N; i++)
    {
        pair<int, int> p;
        cin >> p.first;
        p.second = i;

        vec.push_back(p);
    }

    sort(vec.begin(), vec.end());

    int beg = 0;
    int end = vec.size() - 1;

    while (beg != end)
    {
        int currSum = vec[beg].first + vec[end].first;

        if (currSum==K)
        {
            cout << vec[beg].second << " " << vec[end].second;
            break;
        }
        
        if (currSum>K)
        {
            end--;
        }
        else
        {
            beg++;
        }
    }
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
