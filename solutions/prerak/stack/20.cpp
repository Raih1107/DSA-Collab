// TC --> O(N) and SC --> O(N)

#include <bits/stdc++.h>
using namespace std;

bool compare(char a, char b) {
  if (a == '(' && b == ')' || a == '{' && b == '}' || a == '[' && b == ']')
    return true;
  return false;
}
bool isValid(string s) {
  stack<char> st;
  for (char ch : s) {
    if (ch == '(' || ch == '[' || ch == '{')
      st.push(ch);
    else {
      if (st.empty()) {
        cout << "hello" << endl;
        return false;
      }
      char openBracket = st.top();
      st.pop();
      if (compare(openBracket, ch))
        continue;
      else
        return false;
    }
  }
  return st.empty();
}

int main() {
  string s = "()[]{}";
  cout << isValid(s) << endl;
  return 0;
}
