// TC --> O(log2N) and SC --> O(log2N)

#include <bits/stdc++.h>
using namespace std;

string baseNeg2(int n) {
  if (n == 0)
    return "0";
  string res = "";
  while (n) {
    int rem = n % (-2);
    n = n / -2;
    if (rem < 0) {
      rem += 2;
      n += 1;
    }
    res = to_string(rem) + res;
  }
  return res;
}

int main() {
  int n = 2;
  cout << baseNeg2(n) << endl;
  return 0;
}
