#pragma once
//https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/description/?fbclid=IwZXh0bgNhZW0CMTEAAR1vHQvmKGVbMH5VKjKnr54_Nhv-fZV8CIAe3aew2-rj5ykLMztxo3dSDCE_aem_ecuxYRWZ8cYwLwt821Vgnw
#include <vector>
class Solution {
public:
    std::vector<std::vector<int>> groupThePeople(std::vector<int>& groupSizes) {
        std::vector<std::vector<int>> result;
        std::vector<std::vector<int>> tempGroups(groupSizes.size() + 1);

        for (int i = 0; i < groupSizes.size(); i++)
        {
            int size = groupSizes[i];
            tempGroups[size].push_back(i);

            if (tempGroups[size].size() == size)
            {
                result.push_back(tempGroups[size]);
                tempGroups[size].clear();
            }
        }
        return result;
    }
};