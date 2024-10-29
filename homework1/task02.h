#pragma once
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(vector<int>& arr, int numOfEl)
{
    for (int i = 1; i < numOfEl; i++)
    {
        int currEl = arr[i];;
        int previousInd = i - 1;

        while (previousInd >= 0 && arr[previousInd] > currEl)
        {
            arr[previousInd + 1] = arr[previousInd];
            previousInd--;
        }
        arr[previousInd + 1] = currEl;
    }
}

double getMedian(vector<int>& arr, int numOfEl)
{
    if (numOfEl == 1)
    {
        return arr[0];
    }
    else if (numOfEl == 2)
    {
        return (arr[0] + arr[1]) / 2.0;
    }

    insertionSort(arr, numOfEl);
    int mid1Ind = numOfEl / 2;
    if (numOfEl % 2 == 0)
    {
        int mid2Ind = mid1Ind - 1;

        return (arr[mid2Ind] + arr[mid1Ind]) / 2.0;
    }
    else
    {
        return arr[mid1Ind];
    }
}