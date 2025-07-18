// TC --> O(N) and SC --> O(N)

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int val) : val(val), next(nullptr) {}
  ListNode(int val, ListNode *next) : val(val), next(next) {}
};

ListNode *reverseList(ListNode *head) {
  ListNode *prev = nullptr;
  ListNode *curr = head;

  while (curr != nullptr) {
    ListNode *tempNode = curr->next;
    curr->next = prev;
    prev = curr;
    curr = tempNode;
  }

  return prev;
}

int main() {
  ListNode *n3 = new ListNode(3, nullptr);
  ListNode *n2 = new ListNode(2, n3);
  ListNode *n1 = new ListNode(1, n2);
  ListNode *head = n1;
  ListNode *result = reverseList(head);
  cout << result->val << endl;
  return 0;
}
