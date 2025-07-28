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

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
  int total = 0;
  int carry = 0;
  ListNode *dummy = new ListNode();
  ListNode *result = dummy;

  while (carry || l1 || l2) {
    total = carry;
    if (l1) {
      total += l1->val;
      l1 = l1->next;
    }
    if (l2) {
      total += l2->val;
      l2 = l2->next;
    }
    carry = total / 10;
    dummy->next = new ListNode(total % 10);
    dummy = dummy->next;
  }

  return result->next;
}

int main() {
  ListNode *l1n1 = new ListNode(2);
  ListNode *l1n2 = new ListNode(4);
  ListNode *l1n3 = new ListNode(3);
  ListNode *l2n1 = new ListNode(5);
  ListNode *l2n2 = new ListNode(6);
  ListNode *l2n3 = new ListNode(4);

  l1n1->next = l1n2;
  l1n2->next = l1n3;
  l2n1->next = l2n2;
  l2n2->next = l2n3;

  ListNode *result = addTwoNumbers(l1n1, l2n1);
  cout << result->next->next->val << endl;

  return 0;
}
