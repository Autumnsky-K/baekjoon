#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string letters[5];
    // 총 5줄의 입력이 주어짐
    // 각 줄에는 최대 15개의 글자들이 빈칸없이 연속으로
    for (int i = 0; i < 5; i++) {
        // getline을 사용 시 오류 발생. 여러 종류의 줄바꿈 문자를 포함해서 읽어오기 때문
        //
        // getline 대신 cin 사용
        // cin을 사용 시 공백, 탭, 줄바꿈 문자를 무시하 의미있는 글자들만 읽어옴
        // getline(cin, letters[i]);
        cin >> letters[i];
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < letters[j].length()) {
                cout << letters[j][i];
            }
        }
    }

    return 0;
}
