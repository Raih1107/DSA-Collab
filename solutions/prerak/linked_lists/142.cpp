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
ListNode *detectCycle(ListNode *head) {

  ListNode *fastPtr = head;
  ListNode *slowPtr = head;
  while (fastPtr && fastPtr->next) {
    slowPtr = slowPtr->next;
    fastPtr = fastPtr->next->next;
    if (slowPtr == fastPtr)
      break;
  }
  if (!fastPtr || !fastPtr->next)
    return nullptr;
  fastPtr = head;
  while (fastPtr != slowPtr) {
    slowPtr = slowPtr->next;
    fastPtr = fastPtr->next;
  }
  return slowPtr;
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
  ListNode *result = detectCycle(head);
  cout << result->val << endl;
  return 0;
}
