// TC --> O(M*N) and SC --> O(1)

#include <bits/stdc++.h>
using namespace std;

 int maximumWealth(vector<vector<int>>& accounts) {
	 int m = accounts.size();
	 int n = accounts[0].size();
	 int maxRowSum = 0;
	for(int i = 0; i < m;  i++){
		int rowSum = 0;
		for(int j = 0; j < n; j++){
			rowSum += accounts[i][j];
		}	
		 maxRowSum = max(maxRowSum, rowSum);
	}	
	return maxRowSum;
    }

int main(){
	vector<vector<int>> accounts = {{1,5},{7,3},{4,5}};
	cout << maximumWealth(accounts) << endl;
	return 0;
}
