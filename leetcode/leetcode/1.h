#pragma once
#include <vector>
#include <unordered_map>
#include "tool.h"

using namespace std;

//1.����֮��
class Solution1 {
public:
    //vector<int> twoSum(vector<int>& nums, int target) {
    //    vector<int> res;

    //    for (int i = 0; i < nums.size(); i++)
    //    {
    //        for (int j = i + 1; j < nums.size(); j++)
    //        {
    //            if (nums[i] + nums[j] == target)
    //            {
    //                res.push_back(i);
    //                res.push_back(j);
    //                return res;
    //            }
    //        }
    //    }
    //    return res;
    //}

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++)
        {
            auto it = map.find(target - nums[i]);
            if (it==map.end()){
                map[nums[i]] = i;
            }
            else
            {
                res.push_back(it->second);
                res.push_back(i);
                return res;
            }
        }
        return res;
    }
};

void test1()
{
    Solution1 s;
    vector<int> nums{ 11,2,3,41,50 };
    int target = 52;
    auto res = s.twoSum(nums,target);
    Tool<int> tool;
    tool.show1dVector(res);
}