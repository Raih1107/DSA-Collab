// [Leetcode 387.](https://leetcode.com/problems/first-unique-character-in-a-string/description/)

// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

// Example 1:

// Input: s = "leetcode"

// Output: 0

// Explanation:

// The character 'l' at index 0 is the first character that does not occur at any other index.

// Example 2:

// Input: s = "loveleetcode"

// Output: 2

// Example 3:

// Input: s = "aabb"

// Output: -1

// Constraints:

//     1 <= s.length <= 105
//     s consists of only lowercase English letters.

class Solution
{
public:
    int firstUniqChar(string s)
    {
        int n = s.length();
        if (n == 1)
        {
            return 0;
        }
        unordered_map<char, int> store;
        for (const char &ch : s)
        {
            store[ch]++;
        }

        for (int i = 0; i < n; ++i)
        {
            if (store[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};
