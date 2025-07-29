// [Leetcode 3.](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

// Given a string s, find the length of the longest substring without duplicate characters.

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.

// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.

// Example 3:

// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

// Constraints:

//     0 <= s.length <= 5 * 104
//     s consists of English letters, digits, symbols and spaces.

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        // can we use two pointers with a hashmap
        // O(n) time complexity
        // O(n) space complexity
        int n = s.length();
        int ans = 0;
        unordered_map<char, int> mp;
        int i = 0;
        int j = 0;
        while (j < n)
        {
            char ch = s[j];
            mp[ch]++;
            // remove the duplicate
            while (mp[ch] > 1)
            {
                mp[s[i]]--;
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
        // generate all the substring and then calculate
        // O(n^2) to generate all the substring at worst case
        // int ans=0;
        // int n=s.length();
        // for(int i=0;i<n;++i){
        //     unordered_set<int>store;
        //     for(int j=i;j<n;++j){
        //         store.insert(s[j]);
        //         if(store.size()==j-i+1){
        //             ans=max(ans,j-i+1);
        //         }else{
        //             break;
        //         }
        //     }
        // }
        // return ans;
    }
};