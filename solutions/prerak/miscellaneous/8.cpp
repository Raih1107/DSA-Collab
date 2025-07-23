// TC --> O(N) and SC --> O(1)

#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s) {
  int index = 0;
  int n = s.size();
  while (s[index] == ' ')
    index++;
  if (index == n)
    return 0;
  int sign = 1;
  if (s[index] == '+')
    index++;
  else if (s[index] == '-') {
    index++;
    sign = -1;
  }
  long long num = 0;
  while (index < n) {
    if (isdigit(s[index])) {
      int digit = s[index] - '0';
      num = num * 10 + digit;
    } else
      break;
    if (sign * num >= INT_MAX)
      return INT_MAX;
    if (sign * num <= INT_MIN)
      return INT_MIN;
    index++;
  }
  return sign * num;
}

int main() {
  string s = " -042";
  cout << myAtoi(s) << endl;
  return 0;
}
