// TC --> O(N) and SC --> O(1)

#include <bits/stdc++.h>
using namespace std;

int findNumbers(vector<int>& nums) {
	int count = 0;

	for(int num:nums){
		int len = (int)log10(num) + 1;
		if(len % 2 ==0){
			count++;

			
		}
	}
	return count;

}

int main(){
	vector<int> nums = {12,345,2,6,7896};

	cout << findNumbers(nums) << endl;

	return 0;
}
