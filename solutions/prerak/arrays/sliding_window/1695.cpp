// TC --> O(N) and SC --> O(M) M is the max number of possible unique element in
// array nums

#include <bits/stdc++.h>
using namespace std;

int maximumUniqueSubarray(vector<int> &nums) {
  int left = 0;
  int right = 0;
  int sum = 0;
  int result = 0;
  unordered_map<int, int> mp;

  for (right = 0; right < nums.size(); right++) {
    if (mp.find(nums[right]) != mp.end()) {
      if (mp[nums[right]] >= left) {
        while (left <= mp[nums[right]]) {
          sum -= nums[left];
          left++;
        }
      }
    }
    mp[nums[right]] = right;
    sum += nums[right];
    result = max(result, sum);
  }
  return result;
}
int main() {
  vector<int> nums = {4, 2, 4, 5, 6};
  cout << maximumUniqueSubarray(nums) << endl;
  return 0;
}
