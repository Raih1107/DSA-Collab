// TC --> O(N) and SC --> O(1)

#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int> &nums) {
  int left = 0;
  int winSum = 0;
  int maxWinSum = 0;
  int minWinLen = INT_MAX;

  for (int right = 0; right < nums.size(); right++) {
    winSum += nums[right];

    while (winSum >= target) {
      minWinLen = min(minWinLen, right - left + 1);
      winSum -= nums[left];
      left++;
    }
  }
  return minWinLen == INT_MAX ? 0 : minWinLen;
}

int main() {
  vector<int> nums = {2, 3, 1, 2, 4, 3};
  int target = 7;
  cout << minSubArrayLen(target, nums) << endl;
  return 0;
}
