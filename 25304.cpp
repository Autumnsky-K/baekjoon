#include "stdio.h"
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
  // 첫째 줄에는 영수증에 적힌 총 금액 X가 주어진다.
  int totAmount = 0;
  cin >> totAmount;

  // 둘째 줄에는 영수증에 적힌 구매한 물건의 종류의 수 N이 주어진다.
  int n = 0;
  cin >> n;

  // 이후 N개의 줄에는 각 물건의 가격 a와 개수 b가 공백을 사이에 두고 주어진다.
  int sum = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;

    sum += a * b;
  }

  if (sum == totAmount) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}