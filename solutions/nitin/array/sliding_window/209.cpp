// [Leetcode 209.](https://leetcode.com/problems/minimum-size-subarray-sum/)

// Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

// Example 1:

// Input: target = 7, nums = [2,3,1,2,4,3]
// Output: 2
// Explanation: The subarray [4,3] has the minimal length under the problem constraint.

// Example 2:

// Input: target = 4, nums = [1,4,4]
// Output: 1

// Example 3:

// Input: target = 11, nums = [1,1,1,1,1,1,1,1]
// Output: 0

// Constraints:

//     1 <= target <= 109
//     1 <= nums.length <= 105
//     1 <= nums[i] <= 104

// Follow up: If you have figured out the O(n) solution, try coding another solution of which the time complexity is O(n log(n)).

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int ans = INT_MAX;
        int total = 0;
        while (j < n)
        {
            total += nums[j];
            while (total >= target)
            {
                ans = min(ans, j - i + 1);
                total -= nums[i];
                i++;
            }
            j++;
        }
        return ans == INT_MAX ? 0 : ans;
    }
};