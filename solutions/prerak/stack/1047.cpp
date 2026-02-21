// TC --> O(N) and SC --> O(N)

#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string s) {
	string res = "";
	for(char ch:s){
		if(!res.size()) res.push_back(ch);
		else{
			if(res.back() == ch) res.pop_back();
			else res.push_back(ch);
		}
	}
	return res;
}

int main() {
  string s = "azxxzy";
  cout << removeDuplicates(s) << endl;
  return 0;
}
