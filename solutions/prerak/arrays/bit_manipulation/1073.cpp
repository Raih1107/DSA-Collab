// TC --> O(max(M,N)) and SC --> O(max(M,N))

#include <bits/stdc++.h>
using namespace std;

vector<int> addNegabinary(vector<int> &arr1, vector<int> &arr2) {
  int i = arr1.size() - 1;
  int j = arr2.size() - 1;
  int carry = 0;
  vector<int> res;
  while (i >= 0 || j >= 0 || carry) {
    if (i >= 0) {
      carry += arr1[i];
      i--;
    }
    if (j >= 0) {
      carry += arr2[j];
      j--;
    }
    int digit = carry & 1;

    carry = -(carry >> 1);
    res.push_back(digit);
  }
  while(res.size() > 1 && res.back() == 0){
	  res.pop_back();
  }
  reverse(res.begin(), res.end());
  return res;
}

int main() {
  vector<int> arr1 = {1, 1, 1, 1, 1};
  vector<int> arr2 = {1, 0, 1};
  vector<int> res = addNegabinary(arr1, arr2);
  for (int ele : res) {
    cout << ele << endl;
  }
  return 0;
}
