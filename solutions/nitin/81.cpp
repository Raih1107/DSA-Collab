// 81. Search in Rotated Sorted Array II

// There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).

// Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is
// [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed).
// For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].

// Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.

// You must decrease the overall operation steps as much as possible.

// Example 1:

// Input: nums = [2,5,6,0,0,1,2], target = 0
// Output: true
// Example 2:

// Input: nums = [2,5,6,0,0,1,2], target = 3
// Output: false

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef pair<int, int> pii;
typedef vector<int> vi;

bool findElement(const vector<int> &input, int n, int target)
{

    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (input[mid] == target)
        {
            return true;
        }
        // we can't decide because of dulplicates so decrease the size
        if (input[start] == input[mid] && input[mid] == input[end])
        {
            start++;
            end--;
        }
        // we can decide
        else
        {

            // which part is sorted?

            // left part
            if (input[start] <= input[mid])
            {
                if (input[start] <= target && target <= input[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }

            // right part
            else
            {
                if (input[mid] <= target && target <= input[end])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
    }
    return false;
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
    cout << findElement(input, n, target);
    return 0;
}