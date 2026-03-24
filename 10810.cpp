#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // n: 바구니의 개수, m: 공을 넣는 회수
  int n = 0, m = 0;
  cin >> n >> m;

  // baskets 바구니
  vector<int> baskets(n+1, 0);

  for (int x = 0; x < m; x++) {
    int i = 0, j = 0, k = 0;
    cin >> i >> j >> k;
    for (int idx = i; idx <= j; idx++) {
      baskets[idx] = k;
    }
  }

  for (int idx = 1; idx <= n; idx++) {
    cout << baskets[idx] << " ";
  }

  return 0;
}