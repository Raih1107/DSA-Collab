// TC --> O(N) and SC --> O(N)

#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	unordered_set<int> hashSet;
	unordered_set<int> ans;

	for(int num:nums1) hashSet.insert(num);
	for(int num:nums2){
		if(hashSet.count(num)){
			ans.insert(num);
		}
	}
	return vector<int>(ans.begin(), ans.end());
}

int main(){

	vector<int> nums1 = {4,9,5};
	vector<int> nums2 = {9,4,9,8,4};
	vector<int> ans = intersection(nums1, nums2);
	for(int ele:ans) cout << ele << endl;
	return 0;

}
