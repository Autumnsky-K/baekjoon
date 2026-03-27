#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // 길이 10의 set 생성
  // set<int> remainders;
  // 기존 set을 unordered_set으로 변경.
  // 정렬 하는 과정이 존재하지 않아 조금 더 빠름.
  unordered_set<int> remainders;

  // 나눗셈의 제수
  const int divisor = 42;

  // 10번의 입력을 받아서 42로 나눈 결과를 배열에 저장
  for (int i = 0; i < 10; i ++) {
    int x = 0;
    cin >> x;
    remainders.insert(x % divisor);
  }

  cout << remainders.size() << "\n";

  return 0;
}