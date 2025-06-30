// TC --> O(N*K) and SC --> O(N*K)

#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {

	unordered_map<string, vector<string>> mp;
	for(string str:strs){
		string hashString = "";
		vector<int> freq(26,0);
		for(char ch:str){
			freq[ch - 'a']++;
		}
		for(int i = 0; i < 26; i++){
			hashString += freq[i];
			hashString += '#';
		}
		mp[hashString].push_back(str);
	}

	vector<vector<string>> ans;
	for(auto ele:mp){
		ans.push_back(ele.second);
	}
	return ans;
}

int main(){
	vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
	vector<vector<string>> ans = groupAnagrams(strs);
	for(int i = 0; i < ans.size(); i++){

		cout << i + 1 << ": " <<endl;
		for(int j = 0; j < ans[i].size(); j ++){
			cout << ans[i][j] << " " << endl;
		}
	}
	return 0;
}
