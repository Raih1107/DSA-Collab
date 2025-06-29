// [Leetcode 49.](https://leetcode.com/problems/group-anagrams/description/)

// Given an array of strings strs, group the

// together. You can return the answer in any order.

// Example 1:

// Input: strs = ["eat","tea","tan","ate","nat","bat"]

// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

// Explanation:

//     There is no string in strs that can be rearranged to form "bat".
//     The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
//     The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.

// Example 2:

// Input: strs = [""]

// Output: [[""]]

// Example 3:

// Input: strs = ["a"]

// Output: [["a"]]

// Constraints:

//     1 <= strs.length <= 104
//     0 <= strs[i].length <= 100
//     strs[i] consists of lowercase English letters.

// time complexity of O(n*klog(k))  ->k is the length of the string
// space of O(n)-> using a unordered_map

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> store;
        for (const auto &s : strs)
        {
            string temp = s;
            sort(temp.begin(), temp.end());
            store[temp].push_back(s);
        }
        for (const auto &[a, b] : store)
        {
            ans.push_back(b);
        }
        return ans;
    }
};
