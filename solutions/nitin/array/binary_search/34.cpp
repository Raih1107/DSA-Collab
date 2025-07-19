// Find First and Last Position of Element in Sorted Array

// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:

// Input: nums = [], target = 0
// Output: [-1,-1]

// Constraints:

// 0 <= nums.length <= 105
// -109 <= nums[i] <= 109
// nums is a non-decreasing array.
// -109 <= target <= 109

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef pair<int, int> pii;
typedef vector<int> vi;

int findBound(const vector<int> &input, int target, bool isLower)
{
    int start = 0;
    int end = input.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int e = input[mid];
        if (e == target)
        {
            if (isLower)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else if (e > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return isLower ? start : end;
}

vector<int> solve(const vector<int> &input, int n, int target)
{
    if (binary_search(input.begin(), input.end(), target))
    {
        int lowerBound = findBound(input, target, true);
        int upperBound = findBound(input, target, false);
        return {lowerBound, upperBound};
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