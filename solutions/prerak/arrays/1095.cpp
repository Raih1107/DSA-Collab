// TC --> O(logN) and SC --> O(1)
#include <bits/stdc++.h>
using namespace std;

class MountainArray {
private:
  vector<int> arr;

public:
  MountainArray(const vector<int> &v) : arr(v) {}

  int get(int index) {
    if (index >= 0 && index < arr.size())
      return arr[index];
    throw out_of_range("Index out of bounds");
  }

  int length() { return arr.size(); }
};

int findPeak(MountainArray &mountainArr) {
  int left = 0;
  int right = mountainArr.length() - 1;

  while (left < right) {
    int mid = left + (right - left) / 2;
    if (mountainArr.get(mid) < mountainArr.get(mid + 1))
      left = mid + 1;
    else
      right = mid;
  }

  return left;
}

int findInMountainArray(int target, MountainArray &mountainArr) {
  int peakIndex = findPeak(mountainArr);

  // Binary search in ascending part
  int left = 0, right = peakIndex;
  while (left <= right) {
    int mid = left + (right - left) / 2;
    int val = mountainArr.get(mid);
    if (val == target)
      return mid;
    if (val < target)
      left = mid + 1;
    else
      right = mid - 1;
  }

  // Binary search in descending part
  left = peakIndex + 1, right = mountainArr.length() - 1;
  while (left <= right) {
    int mid = left + (right - left) / 2;
    int val = mountainArr.get(mid);
    if (val == target)
      return mid;
    if (val > target)
      left = mid + 1;
    else
      right = mid - 1;
  }

  return -1;
}

int main() {
  vector<int> rawArr = {1, 2, 3, 4, 5, 3, 1};
  int target = 3;
  MountainArray mountainArr(rawArr);
  cout << findInMountainArray(target, mountainArr) << endl;

  return 0;
}
