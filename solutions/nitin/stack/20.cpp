// [Leetcode 20.](https://leetcode.com/problems/valid-parentheses/)

// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

//     Open brackets must be closed by the same type of brackets.
//     Open brackets must be closed in the correct order.
//     Every close bracket has a corresponding open bracket of the same type.

// Example 1:

// Input: s = "()"

// Output: true

// Example 2:

// Input: s = "()[]{}"

// Output: true

// Example 3:

// Input: s = "(]"

// Output: false

// Example 4:

// Input: s = "([])"

// Output: true

// Constraints:

//     1 <= s.length <= 104
//     s consists of parentheses only '()[]{}'.

class Solution
{
    unordered_map<char, char> mp = {
        {'}', '{'},
        {')', '('},
        {']', '['},
    };

public:
    bool isValid(string s)
    {
        stack<char> store;
        for (const char &ch : s)
        {
            // closing bracket
            if (mp.count(ch))
            {
                if (store.empty() || store.top() != mp[ch])
                {
                    return false;
                }
                store.pop();
            }
            // opening bracket
            else
            {
                store.push(ch);
            }
        }
        return store.empty();
    }
};