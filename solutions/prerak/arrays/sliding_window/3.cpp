// TC --> O(N) and SC --> O(1)

#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
  int left = 0;
  vector<int> charArr(128, -1);
  int maxLen = 0;
  for (int right = 0; right < s.size(); right++) {
    if (charArr[s[right]] >= left)
      left = charArr[s[right]] + 1;
    charArr[s[right]] = right;
    maxLen = max(maxLen, right - left + 1);
  }
  return maxLen;
}

int main() {
  string s = "abcabcbb";
  cout << lengthOfLongestSubstring(s) << endl;
  return 0;
}
