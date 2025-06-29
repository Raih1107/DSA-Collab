// TC --> O(N) and SC --> O(N)

#include <bits/stdc++.h>
using namespace std;

int numUniqueEmails(vector<string>& emails) {
	unordered_set<string> hashSet;	
	for(string email:emails){
		
		string cleanEmail = "";

		for(char ch:email){
			if(ch == '.') continue;
			if(ch == '+' || ch == '@') break;
			cleanEmail += ch;
		}
		cleanEmail += email.substr(email.find('@'));
		hashSet.insert(cleanEmail);
	}
	return hashSet.size();
}

int main(){
	vector<string> emails = {"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
	cout << numUniqueEmails(emails) << endl;
	return 0;
}
