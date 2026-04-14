#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /*
     * 기존 생각
     *
     * 수학적으로 접근 시도
     * 전체 넓이에서 겹치는 영역을 계산하느라 복잡해짐
     * 폐기
     */

    int n = 0;
    cin >> n;

    // 도화지 영역을 각 요소가 0인 100x100 크기의 2차원 배열로 만들기
    // 색종이의 영역을 1로 변경
    int squares[100][100] = {0};
    int count = 0;
    for (int i = 0; i < n; i++) {
        // left: 도화지 왼쪽 변과 도화지 왼쪽 변 사이의 거리
        // bottom: 도화지 아래쪽 변과 도화지 아래쪽 변 사이의 거리
        // left와 bottom을 포함하여 10x10 영역을 1로 칠해야함
        int left, bottom;
        cin >> left >> bottom;
        for (int i = left; i < left+10; i++) {
            for (int j = bottom; j < bottom +10; j++) {
                if (squares[i][j] == 0) count++;
                squares[i][j] = 1;
            }
        }
    }

    cout << count;

    return 0;
}
