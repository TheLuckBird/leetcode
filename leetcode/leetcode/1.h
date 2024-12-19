#pragma once
#include <vector>
#include "tool.h"

using namespace std;

//1.两数之和
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
    }
};

void test1()
{
    Solution s;
    vector<int> nums{ 1,2,3,4,5 };
    int target = 7;
    auto res = s.twoSum(nums,target);
    Tool<int> tool;
    tool.show1dVector(res);
}