/* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order. */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> output;
    for(int i = 0; i<nums.size();i++)
    {
        for (int j = i+1;j<nums.size();j++)
        {
            if (nums[i]+nums[j]==target)
            {
                output.push_back(i);
                output.push_back(j);
                return output;
            }
        }
    }
    return output;  
    }
};
