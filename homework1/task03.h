#pragma once
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int partition(vector<pair<string, int>>& arr, int low, int high)
{
    pair<string, int> pivot = arr[high];
    int i = low;

    for (int j = i; j < high; j++)
    {
        if (arr[j].second > pivot.second)
        {
            swap(arr[i], arr[j]);
            i++;
        }
        else if (arr[j].second == pivot.second)
        {
            if (arr[j].first < pivot.first)
            {
                swap(arr[i], arr[j]);
                i++;
            }
        }
    }
    swap(arr[i], arr[high]);
    return i;
}

void quick_sort(vector<pair<string, int>>& arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}