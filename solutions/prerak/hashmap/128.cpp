// TC --> O(N) and SC --> O(N)

#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
	unordered_set<int> hashSet(nums.begin(), nums.end());

	int longest = 0;
	for(int num:hashSet){
		if(hashSet.find(num - 1) == hashSet.end()){
			int count = 1;
			int x = num;
			while(hashSet.find(x + 1) != hashSet.end()){
				x += 1;
				count++;
			}
			longest = max(longest, count);
		}
	}
	return longest;
}

int main(){
	vector<int> nums = {0,3,7,2,5,8,4,6,0,1};
	cout << longestConsecutive(nums) << endl;
	return 0;
}
