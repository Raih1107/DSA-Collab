// TC --> O(N) and SC --> O(1)

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices) {
  int buyPrice = prices[0];
  int res = 0;
  for (int i = 0; i < prices.size(); i++) {
    int price = prices[i];
    if (prices[i] < buyPrice) {
      buyPrice = prices[i];
    } else {
      res = max(res, price - buyPrice);
    }
  }
  return res;
}

int main() {
  vector<int> prices = {7, 1, 5, 3, 6, 4};
  cout << maxProfit(prices) << endl;
}
