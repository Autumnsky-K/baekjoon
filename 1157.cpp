#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string word;
    cin >> word;

    // 알파벳 26자 길이의 vector 생성
    vector<int> alphabets(26, 0);

    for (char c: word) {
        int letter;
        // 'A' = 65
        // 'a' = 97
        if (c >= 'a' && c <= 'z') {
            letter = c - ('a' - 'A');
        } else {
            letter = c;
        }
        alphabets[letter-'A']++;
    }

    // 가장 큰 수 구하기
    int maxNum = 0;
    char mostChar;
    for (int i = 0; i < alphabets.size(); i++) {
        if (alphabets[i] > maxNum) {
            maxNum = alphabets[i];
            mostChar = i + 'A';
        } else if (alphabets[i] == maxNum) {
            mostChar = '?';
        }
    }

    cout << mostChar;

    return 0;
}
