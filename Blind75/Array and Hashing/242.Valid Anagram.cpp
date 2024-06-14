/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;
        
        for(int i = 0; i < s.size() ; i++)
        {
            // add i to map
            smap[s[i]]++;
            tmap[t[i]]++;
        }
        for(int i = 0; i < smap.size() ; i++)
        {
            if (smap[i] != tmap[i])
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

