// TC --> O(logN) and SC --> O(1)

#include <bits/stdc++.h>
using namespace std;

bool search(vector<int>& nums, int target) {

	int l = 0;
	int h = nums.size() - 1;

	while( l <= h ){
		int mid = l + ( h - l ) /2;
		if( nums[mid] == target) return true;

		// this if block handles the duplicate case rest of the code is same to leetcode 33.
		if(nums[mid] == nums[l]){
			l++;
			continue;
		}

		// case1: array to the left of mid is sorted
		if(nums[l] <= nums[mid]){
			if(target >= nums[l] && target <= nums[mid]) h = mid - 1;
			else  l = mid + 1;
		}


		// case2: array to the right of mid is sorted
		else{
			if(target >= nums[mid] && target <= nums[h]) l = mid + 1;
			else h = mid - 1; 
		}
	}
	return false;

}

int main(){
	vector<int> nums = {2,5,6,0,0,1,2};
	int target = 3;
	cout << search(nums,target) << endl;
	return 0;
}
