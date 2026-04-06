#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 1. 원본 문자열의 복사본을 생성 후 뒤집어서 비교
    // string word;
    // string flippedWord;
    // cin >> word;
    // flippedWord = word;

    // // reverse(flippedWord.begin(), flippedWord.begin()+word.size());
    // reverse(flippedWord.begin(), flippedWord.end());

    // cout << (word == flippedWord ? 1 : 0);

    // 2. equal 알고리즘을 사용한 비교법. equal(1번째 범위 시작, 1번째 범위 끝, 2번째 범위 시)
    string word;
    cin >> word;

    cout << equal(word.begin(), word.end(), word.rbegin());

    return 0;
}
