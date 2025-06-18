// 33. Search in Rotated Sorted Array

// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.

// Example 1:

// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4
// Example 2:

// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1
// Example 3:

// Input: nums = [1], target = 0
// Output: -1

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef pair<int, int> pii;
typedef vector<int> vi;

int findElement(const vector<int> &input, int n, int target)
{

    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (input[mid] == target)
        {
            return mid;
        }
        // check which part is sorted and then we will compare the element
        // there will be always  one sorted part and one unsorted part

        // left part is sorted
        else if (input[start] <= input[mid])
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
        // right part is sorted
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
    return -1;
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