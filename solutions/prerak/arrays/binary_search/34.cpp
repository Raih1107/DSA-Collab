// TC --> O(logN) and SC --> O(1)

#include <bits/stdc++.h>
using namespace std;

int bs(vector<int>& nums, int target, bool isSearchingLeft){
	int l = 0;
	int h = nums.size() - 1;
	int idx = -1;
	while(l <= h){
		int m = l + (h - l)/2;
		if(nums[m] > target) h = m - 1;
		else if(nums[m] < target) l = m + 1;
		else{
			idx = m;
			if(isSearchingLeft) h = m - 1;
			else l = m + 1;
		}

	}
	return idx;
		

	}

int main(){
	vector<int> nums = {5,7,7,8,8,10};
	int target = 8;	
	int leftIndex = bs(nums, target, true);
	int rightIndex = bs(nums,target,false);
	vector<int> ans(2,-1);
	ans[0] = leftIndex;
	ans[1] = rightIndex;	
	cout << ans[0] << endl;
	cout << ans[1] << endl;
	return 0;
}
