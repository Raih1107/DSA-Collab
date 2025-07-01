// [Leetcode 128.](https://leetcode.com/problems/longest-consecutive-sequence/description/)

// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.

// Example 1:

// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

// Example 2:

// Input: nums = [0,3,7,2,5,8,4,6,0,1]
// Output: 9

// Example 3:

// Input: nums = [1,0,1,2]
// Output: 3

// Constraints:

//     0 <= nums.length <= 105
//     -109 <= nums[i] <= 109

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        // using a unordered set to store the element

        int n = nums.size();
        unordered_set<int> store(nums.begin(), nums.end());

        int ans = 0;
        int cnt = 0;
        for (const auto &i : store)
        {
            if (store.count(i - 1) == 0)
            {
                cnt = 1;
                int next = i + 1;
                while (store.count(next))
                {
                    cnt++;
                    next = next + 1;
                }
                ans = max(ans, cnt);
            }
        }

        return ans;

        // time complexity->O(nlogn)
        // space complexity->O(1)
        // int n=nums.size();
        // if(n==0){
        //     return 0;
        // }
        // // sort the array
        // sort(nums.begin(),nums.end());
        // int prev=nums[0];
        // int ans=1;
        // int cnt=1;
        // for(int i=1;i<n;++i){
        //     if(prev+1==nums[i]){
        //         cnt++;
        //         prev=nums[i];
        //         ans=max(ans,cnt);
        //     }
        //     else if(prev!=nums[i]){
        //         cnt=1;
        //         prev=nums[i];
        //     }
        // }
        // return ans;
    }
};