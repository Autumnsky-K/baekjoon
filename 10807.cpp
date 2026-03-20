#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // 정수의 개수 N
  int n = 0;
  cin >> n;

  // 공백으로 구분된 정수의 나열
  vector<int> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // 찾으려고 하는 정수
  int v = 0;
  cin >> v;

  // count(배열 시작, 배열 끝, 찾고 싶은 값);
  int cnt = 0;
  cnt = count(arr.begin(), arr.end(), v);

  cout << cnt << endl;

  return 0;
}