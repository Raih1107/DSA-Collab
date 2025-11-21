// TC --> O(NlogN) and SC --> O(1)

#include <bits/stdc++.h>
using namespace std;

long long largestPerimeter(vector<int> &nums) {
	sort(nums.begin(), nums.end());
	long long currSum = 0;	
	long long peri = 0;
	for(int num:nums){
		if(num < currSum) peri = num + currSum;
		currSum += num;
	}
	return peri;
}

int main() {
  vector<int> nums = {1, 12, 1, 2, 5, 50, 3};
  long long peri = largestPerimeter(nums);
  cout << peri << endl;
}
