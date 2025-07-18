// TC --> O(N) and SC --> O(1)

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int val) : val(val), next(nullptr) {}
  // ListNode(int val, ListNode *next) : val(val), next(next) {}
};

bool hasCycle(ListNode *head) {

  ListNode *slowPtr = head;
  ListNode *fastPtr = head;
  while (slowPtr != nullptr && fastPtr != nullptr) {
    slowPtr = slowPtr->next;
    fastPtr = fastPtr->next->next;
    if (slowPtr == fastPtr)
      return true;
  }

  return false;
}

int main() {
  ListNode *n4 = new ListNode(-4);
  ListNode *n3 = new ListNode(0);
  ListNode *n2 = new ListNode(2);
  ListNode *n1 = new ListNode(3);
  n1->next = n2;
  n2->next = n3;
  n3->next = n4;
  n4->next = n2;
  ListNode *head = n1;
  if (hasCycle(head))
    cout << "the linked list has a cycle" << endl;
  else
    cout << "no cycle found" << endl;
  return 0;
}
