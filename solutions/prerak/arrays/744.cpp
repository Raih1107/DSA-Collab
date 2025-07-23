// TC --> O(N) and SC --> O(1)

#include <bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
	for(char ch:letters){
		if(ch > target){
			return ch;
		}
		
		
	}
	return letters[0];

}

int main(){
	vector<char> letters = {'c','f','j'};
	char target = 'c';
	cout << nextGreatestLetter(letters, target) << endl;
	return 0;
}
