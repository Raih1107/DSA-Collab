// [Leetcode 349.](https://leetcode.com/problems/intersection-of-two-arrays/)

// Given two integer arrays nums1 and nums2, return an array of their

// . Each element in the result must be unique and you may return the result in any order.

// Example 1:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]

// Example 2:

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.

// Constraints:

//     1 <= nums1.length, nums2.length <= 1000
//     0 <= nums1[i], nums2[i] <= 1000

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {

        unordered_set<int> inNums1(nums1.begin(), nums1.end());
        unordered_set<int> uni;
        for (const int &i : nums2)
        {
            if (inNums1.count(i))
            {
                uni.insert(i);
            }
        }
        vector<int> ans(uni.begin(), uni.end());
        return ans;
        // sort(nums1.begin(), nums1.end());
        // sort(nums2.begin(), nums2.end());
        // int n1 = nums1.size();
        // int n2 = nums2.size();
        // int i = 0;
        // int j = 0;
        // vector<int> ans;
        // while (i < n1 && j < n2) {
        //     cout << nums1[i] << " " << nums2[j] << endl;
        //     if ((ans.empty() || ans.back() != nums1[i]) &&
        //         nums1[i] == nums2[j]) {
        //         ans.push_back(nums1[i]);
        //         i++;
        //         j++;
        //     } else if (nums1[i] < nums2[j]) {
        //         i++;
        //     } else {
        //         j++;
        //     }
        // }
        // return ans;
    }
};