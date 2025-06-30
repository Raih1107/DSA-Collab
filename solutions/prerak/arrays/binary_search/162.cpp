// TC --> O(logN) and SC --> O(1)

#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums) {
	int n = nums.size();

	// Edge Cases
	if( n == 1 ) return 0;
	else{
		if(nums[0] > nums[1] ) return 0;
		if(nums[n - 1] >  nums[n - 2]) return n-1;
	}



	int l = 1;
	int h = n - 2;
	int mid;

	while( l <= h ){
		mid = l + ( h - l ) / 2;
		if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) return mid;
		if(nums[mid] < nums[mid + 1]) l = mid + 1;
		if(nums[mid] > nums[mid + 1]) h = mid - 1;


	}
	return -1;
}



int main(){
	vector<int> nums = {1,2};

	cout << findPeakElement(nums) << endl;
	return 0;
}
