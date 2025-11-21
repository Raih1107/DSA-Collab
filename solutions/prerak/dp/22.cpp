// TC --> O((2^2)(N)) and SC --> O(N)

#include <bits/stdc++.h>
using namespace std;

void dfs(int leftP, int rightP, int n, string s, vector<string> &res) {

  if (leftP == rightP && leftP + rightP == 2 * n) {
    res.push_back(s);
    return;
  }
  if (leftP < n)
    dfs(leftP + 1, rightP, n, s + '(', res);
  if (rightP < leftP)
    dfs(leftP, rightP + 1, n, s + ')', res);
}

vector<string> generateParenthesis(int n) {
  vector<string> res;
  dfs(0, 0, n, "", res);
  return res;
}

int main() {
  vector<string> res = generateParenthesis(2);
  for (auto ele : res) {
    cout << ele << endl;
  }
  return 0;
}
