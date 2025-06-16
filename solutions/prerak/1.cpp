// TC --> O(N) and SC --> O(N)

#include <bits/stdc++.h>
using namespace std;


vector<int> twosum(vector<int>& nums, int target){
	unordered_map<int,int> mp;
	for(int i = 0; i < nums.size(); i++){
		int num = nums[i];
		if(mp.find(target - num) != mp.end()){
			return {i, mp[num]};
		}
		mp[num] = i;
	}
	return {};

}



int main(){
	vector<int> nums = {2,7,11,15};
	int target = 9;
	vector<int> ans = twosum(nums, target);
	for(int x:ans){
		cout << x << endl;
	}
	return 0;

}
