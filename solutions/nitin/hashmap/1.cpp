// [Leetcode 1.](https://leetcode.com/problems/two-sum/description/)

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

// Constraints:

// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.

#include <bits/stdc++.h>
using namespace std;
vector<int> solve(const vector<int> &input, int n, int target)
{
    unordered_map<int, int> store;
    for (int i = 0; i < n; ++i)
    {
        int rem = target - input[i];
        if (store.count(rem))
        {
            return {store[rem], i};
        }
        store[input[i]] = i;
    }
    return {-1, -1};
}

int main()
{
    int n;
    cin >> n;
    vector<int> input(n);
    for (int &i : input)
    {
        cin >> i;
    }
    int target;
    cin >> target;
    vector<int> ans = solve(input, n, target);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}
