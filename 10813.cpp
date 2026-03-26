#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // n(N): 바구니의 개수, m(M): 공을 바꾸는 회수
  int n = 0, m = 0;
  cin >> n >> m;

  // 바구니 번호와 인덱스를 맞추기 위해, n+1 길이의 벡터 생성
  vector<int> baskets(n+1);

  // 각 바구니에 처음 바구니 번호와 맞는 번호의 공을 집어넣음
  for (int idx = 0; idx <= n; idx++) {
    baskets[idx] = idx;
  }

  // m번의 순서 동안 반복
  for (int x = 0; x < m; x++) {
    // i, j = 각 바구니의 번호, tmp = 바구니에 있는 공의 번호를 임시 저장할 변수
    int i = 0, j = 0, tmp = 0;
    cin >> i >> j;
    // tmp = baskets[i];
    // baskets[i] = baskets[j];
    // baskets[j] = tmp;
    // 상단의 세줄을 하단의 swap 함수를 이용하여 한 줄로 처리 가능
    swap(baskets[i], baskets[j]);
  }

  for (int idx = 1; idx <= n; idx++) {
    cout << baskets[idx] << (idx == n ? "" : " ");
  }

  return 0;
}