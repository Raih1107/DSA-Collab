// TC --> O(N) and SC --> O(1)

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int val) : val(val), next(nullptr) {}
  ListNode(int val, ListNode *next) : val(val), next(next) {}
};

ListNode *deleteDuplicates(ListNode *head) {
  ListNode *curr = head;
  while (curr != nullptr && curr->next != nullptr) {
    if (curr->val == curr->next->val)
      curr->next = curr->next->next;
    else
      curr = curr->next;
  }
  return head;
}

int main() {
  ListNode *n3 = new ListNode(2, nullptr);
  ListNode *n2 = new ListNode(1, n3);
  ListNode *n1 = new ListNode(1, n2);
  ListNode *head = n1;
  ListNode *result = deleteDuplicates(head);
  cout << result->val << "   " << result->next->val << endl;
  return 0;
}
