#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // n(N): 바구니의 개수, m(M): 바구니를 뒤집는 회수
    int n = 0, m = 0;
    cin >> n >> m;

    // n+1 길이의 배열 만들기
    vector<int> baskets(n+1);
    // 각 바구니의 숫자 초기화
    // for (int i = 0; i <= n; i++) {
    //     baskets[i] = i;
    // }
    // 기존 for 반복문을 이용하여 채우던 것에서 iota를 이용하여 한줄로 깔끔하게 처리
    iota(baskets.begin(), baskets.end(), 0);

    for (int time = 0; time < m; time++) {
        int i = 0, j = 0;
        cin >> i >> j;
        reverse(baskets.begin()+i, baskets.begin()+j+1);
    }

    for (int idx = 1; idx <= n; idx++) {
        cout << baskets[idx] << (idx == n ? "\n" : " ");
    }

    return 0;
}
