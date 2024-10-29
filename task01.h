#pragma once
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int ternarySearchRec(long long left, long long right, long long target, int depth)
{
    if (left == right)
    {
        return depth;
    }

    long long mid1 = left + (right - left) / 3;
    long long mid2 = right - (right - left) / 3;

    if (mid1 + 1 <= target && target < mid2)
    {
        return depth;
    }

    depth++;
    if (target <= mid1)
    {
        return ternarySearchRec(left, mid1, target, depth);
    }
    else
    {
        return ternarySearchRec(mid2, right, target, depth);
    }
}
