// Find Numbers with Even Number of Digits

// Given an array nums of integers, return how many of them contain an even number of digits.

// Example 1:

// Input: nums = [12,345,2,6,7896] Output: 2 Explanation: 12 contains 2 digits (even number of digits). 345 contains 3 digits (odd number of digits). 2 contains 1 digit (odd number of digits). 6 contains 1 digit (odd number of digits). 7896 contains 4 digits (even number of digits). Therefore only 12 and 7896 contain an even number of digits. Example 2:

// Input: nums = [555,901,482,1771] Output: 1 Explanation: Only 1771 contains an even number of digits.

// Constraints:

// 1 <= nums.length <= 500 1 <= nums[i] <= 105

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef pair<int, int> pii;
typedef vector<int> vi;

// take a O(n*d) time -> d is the max digits (6)
// space is O(1)
int countEvenNumbers(const vector<int> &input)
{

    int ans = 0;
    for (const int &i : input)
    {
        int count = 0;
        int temp = i;
        while (temp)
        {
            count++;
            temp /= 10;
        }
        ans += (count % 2 == 0) ? 1 : 0;
    }
    return ans;
}

// take O(n) time
// space is O(1)
int countEvenNumbersOp(const vector<int> &input)
{

    int ans = 0;
    for (const int &i : input)
    {

        // log10(0) is undefined
        int count = (i == 0) ? 1 : static_cast<int>(log10(i)) + 1;
        ans += (count % 2 == 0) ? 1 : 0;
    }
    return ans;
}

// void printLogValueRange()
// {
//     cout << "Number of digits :" << endl;
//     for (int i = 1; i <= 10; ++i)
//     {
//         cout << i << "->" << static_cast<int>(log10(i)) + 1 << endl;
//     }
// }

int main()
{
    int n;
    cin >> n;
    vector<int> input(n);
    for (int &i : input)
    {
        cin >> i;
    }
    // printLogValueRange();
    cout << countEvenNumbers(input) << endl;
    cout << countEvenNumbersOp(input) << endl;

    return 0;
}
