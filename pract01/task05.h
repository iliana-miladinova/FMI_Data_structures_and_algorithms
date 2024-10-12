#pragma once
//https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/description/?fbclid=IwZXh0bgNhZW0CMTEAAR0gzMh_YHR0BpMHEfojkn83mKjjKDaBdkAAnz3B4CEb1_9It3Alsq8DBus_aem_-T_-RK2zI0rxH5r-7Do0sA
#include <vector>
class Solution {
public:
    int findRepetitions(std::vector<int>& nums, int el)
    {
        int repetitions = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == el)
            {
                repetitions++;
            }
        }
        return repetitions;
    }

    int findMaxRepetitions(std::vector<int>& nums)
    {
        int maxRepetingElement = nums[0];
        int maxRepetitions = findRepetitions(nums, maxRepetingElement);
        for (int i = 1; i < nums.size(); i++)
        {
            int currRepetitions = findRepetitions(nums, nums[i]);
            if (currRepetitions > maxRepetitions)
            {
                maxRepetitions = currRepetitions;
                maxRepetingElement = nums[i];
            }
        }
        return maxRepetitions;
    }

    std::vector<std::vector<int>> findMatrix(std::vector<int>& nums)
    {
        int rows = findMaxRepetitions(nums);
        std::vector<std::vector<int>> result(rows);

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < rows; j++)
            {
                if (findRepetitions(result[j], nums[i]) == 0)
                {
                    result[j].push_back(nums[i]);
                    break;
                }
            }
        }
        return result;
    }
};