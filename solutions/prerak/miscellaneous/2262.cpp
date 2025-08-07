// TC --> O(N) and SC --> O(26)

#include <bits/stdc++.h>
using namespace std;

long long appealSum(string s) {
  long long res = 0;
  long long total = 0;
  vector<int> last(26); // initialized with 0
  int n = s.size();
  for (int i = 0; i < n; i++) {
    total += i + 1 - last[s[i] - 'a'];
    last[s[i] - 'a'] = i + 1;
    res += total;
  }
  return res;
}
int main() {
  string s = "abcd";
  cout << appealSum(s) << endl;
  return 0;
}
