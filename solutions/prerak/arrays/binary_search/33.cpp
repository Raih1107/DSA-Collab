// TC --> O(logN) and SC --> O(1)

#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
	int l = 0;
	int h = nums.size() - 1;
	int mid;

	while( l <= h ){
		int mid = l + (h - l)/2;
		if(nums[mid] == target) return mid;

		// case1: left side of mid is sorted
		if(nums[l] <= nums[mid]){
			if(target <= nums[mid] && target >= nums[l]) h = mid - 1;
			else l = mid + 1;
		}


		// case2: right side of mid is sorted
		else{
			if(target >= nums[mid] && target <= nums[h]) l = mid + 1;
			else h = mid - 1;
		}
	}
	return -1;

}


int main(){
	vector<int> nums = {3,1};
	int target = 1;
	cout << search(nums, target) << endl;
	return 0;

}


