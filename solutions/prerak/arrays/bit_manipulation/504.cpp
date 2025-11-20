// TC --> O(log7(N)) and SC --> O(1)

#include <bits/stdc++.h>
using namespace std;

string convertToBase7(int num) {
  string res = "";
  if (num == 0)
    return "0";
  bool neg = num < 0;
  if (neg)
    num = -num;
  while (num != 0) {
    res += '0' + num % 7;
    num /= 7;
  }
  if (neg)
    res.push_back('-');
  reverse(res.begin(), res.end());
  return res;
}

int main() {
  int num = 100;
  cout << convertToBase7(num) << endl;
  return 0;
}
