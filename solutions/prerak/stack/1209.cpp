// TC --> O(N) and SC --> O(N)

#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s, int k) {
	vector<pair<char,int>> st;
	for(char ch:s){
		if(!st.empty() && ch == st.back().first){
			st.back().second++;
if(st.back().second == k) st.pop_back();
		}
		else st.push_back({ch, 1});
	}
  string res = "";
  for(auto &ele:st){
	  res.append(ele.second, ele.first);
  }
  return res;
}

int main() {
  string s = "pbbcggttciiippooaais";
  cout << removeDuplicates(s, 2) << endl;
  return 0;
}
