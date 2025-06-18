// 162. Find Peak Element

// A peak element is an element that is strictly greater than its neighbors.

// Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

// You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

// You must write an algorithm that runs in O(log n) time.

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef pair<int, int> pii;
typedef vector<int> vi;

int solve(vector<int> &input, int n)
{
        if (n == 1)
        {
                return 0;
        }
        if (input[0] > input[1])
        {
                return 0;
        }
        if (input[n - 1] > input[n - 2])
        {
                return n - 1;
        }

        int start = 1;
        int end = n - 2;
        while (start <= end)
        {
                int mid = start + (end - start) / 2;
                if (input[mid] > input[mid - 1] && input[mid] > input[mid + 1])
                {
                        return mid;
                }
                else if (input[mid - 1] < input[mid])
                {
                        start = mid + 1;
                }
                else
                {
                        end = mid - 1;
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
        cout << solve(input, n);
        return 0;
}