/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (int i = 0; i<nums.size(); i++) 
        {
            if (s.find(nums[i]) != s.end()) // if not find return end element 
            {
                return true;
            }
            s.insert(nums[i]);
            
        }
        return false;
    }
};
// @lc code=end

