#pragma once
#include <vector>
class Solution {
public:
    bool canAliceWin(std::vector<int>& nums) {
        int sumAlice = 0;
        int sumBob = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 9)
            {
                sumAlice += nums[i];
            }
            else
            {
                sumBob += nums[i];
            }
        }
        if (sumAlice == sumBob)
        {
            return false;
        }
        return true;
    }
};