// TC --> O(N) and SC --> O(N)

#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t) {
	unordered_map<char,char> mp1;
	unordered_map<char,char> mp2;
	for(int i = 0; i < s.size(); i++){
		if(mp1.find(s[i]) != mp1.end()){
			if(mp1[s[i]] != t[i]) return false;
		}else{
			mp1[s[i]] = t[i];
		}
		
		if(mp2.find(t[i]) != mp2.end()){
			if(mp2[t[i]] != s[i]) return false;
		}
		else{
		mp2[t[i]] = s[i];
		}
	}
	return true;
}

int main(){
	string s = "badc";
	string t = "baba";
	cout << isIsomorphic(s, t) << endl;
	return 0;
}
// the link below helps in understanding the problem statement because the it is not worded properly by leetcode.
//https://leetcode.com/problems/isomorphic-strings/solutions/4943056/baba-badc-paper-title-confusion-resolution-c/
