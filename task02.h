#pragma once
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int countPlayers(vector<int>& players, int minWeight, int maxWeight)
{
    auto upper = upper_bound(players.begin(), players.end(), maxWeight);
    auto lower = lower_bound(players.begin(), players.end(), minWeight);
    return int(upper - lower);
}