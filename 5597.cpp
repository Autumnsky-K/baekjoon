#include <iostream>
#include <vector>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // 교실엔 학생 30명. index를 맞추기 위해 길이 31의 배열 생성
  vector<int> students(31, 0);

  for (int i = 1; i <= 28; i++) {
    int stuNum = 0;
    cin >> stuNum;
    students[stuNum] = 1;
  }

  // 30명의 학생 중 0인 학생만 찾아서 출력
  for (int idx = 1; idx <= 30; idx++) {
    if (students[idx] == 0) {
      cout << idx << "\n";
    }
  }
  
  return 0;
}