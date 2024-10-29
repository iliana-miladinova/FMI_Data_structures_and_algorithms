#pragma once
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

constexpr int MAX_AI = 62;

int getNumBySymbol(char sym)
{
    if (isdigit(sym))
    {
        return sym - '0';
    }
    else if (islower(sym))
    {
        return sym - 'a' + 10;
    }
    else if (isupper(sym))
    {
        return sym - 'A' + 36;
    }
    return 0;
}