#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 9x9 격자판 => 크기가 정해져있음.
    // 좌표를 맞추기 위해 10x10으로 선언. 0번 행과 0번 열은 사용하지 않음.
    int a[10][10];

    // 받은 값을 격자판에 넣음
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cin >> a[i][j];
        }
    }

    // 행렬에는 0 <= n <= 100 인 자연수만 있으므로 최댓값을 -1로 초기화
    int maxNum = -1;
    int coordinate[2];
    // 최댓값 찾기.
    // 최댓값이 두개 이상인 경우 그 중 한 곳만만 출력하면 되니 첫번째 최댓값만 저장
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (maxNum < a[i][j]) {
                maxNum = a[i][j];
                coordinate[0] = i;
                coordinate[1] = j;
            }
        }
    }

    cout << maxNum << "\n";
    cout << coordinate[0] << " " << coordinate[1];

    return 0;
}
