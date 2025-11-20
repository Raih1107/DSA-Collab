// TC --> O(max(M,N)) and SC --> O(max(M,N))

#include <bits/stdc++.h>
using namespace std;

string addBinary(string a, string b) {
  int i = a.length() - 1;
  int j = b.length() - 1;
  int carry = 0;
  string res = "";
  while (i >= 0 || j >= 0 || carry) {
    int sum = carry;
    if (i >= 0) {
      sum += a[i] - '0';
      i--;
    }
    if (j >= 0) {
      sum += b[j] - '0';
      j--;
    }
    res += to_string(sum % 2);
    carry = sum / 2;
  }
  reverse(res.begin(), res.end());
  return res;
};

int main() {
  string a = "1010";
  string b = "1011";
  cout << addBinary(a, b) << endl;
  return 0;
}
