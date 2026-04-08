#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /* 첫번째 풀이: regex 활용
     * 표준 라이브러리를 사용했지만, regex의 경우 매우 무겁다고 함.
     * 글자의 길이가 길어질 경우 성능상 치명적.
     */
    // vector<string> replaceLetters = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    // string inputWord;
    // cin >> inputWord;

    // for (int i = 0; i < replaceLetters.size(); i++) {
    //     regex pattern(replaceLetters[i]);
    //     inputWord = regex_replace(inputWord, pattern, "|");
    // }

    // cout << inputWord.length();

    /* 문제가 요구하는 핵심 해결 능력
     * 인덱스 조작을 통한 패턴 매칭
     */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count = 0;

    string inputWord;
    cin >> inputWord;

    int i = 0;
    while (i < inputWord.length()) {
        bool found = false;
        // "c=", "c-" 에 대한 처리
        if (inputWord[i] == 'c' && i != (inputWord.length() - 1)) {
            if (inputWord[i+1] == '=' || inputWord[i+1] == '-') {
                found = true;
            }
        }
        // d로 시작하는 글자들에 대한 처리
        else if (inputWord[i] == 'd' && i != (inputWord.length() - 1)) {
            // "dz=" 에 대한 처리
            if ((inputWord.length() - i) > 2 && inputWord[i+1] == 'z' && inputWord[i+2] == '=') {
                count++;
                i += 3;
                continue;
            }
            // "d-"에 대한 처리
            else if (inputWord[i+1] == '-') {
                found = true;
            }
        }
        // "lj" 에 대한 처리
        else if (inputWord[i] == 'l' && i != (inputWord.length() - 1)) {
            if (inputWord[i+1] == 'j') {
                found = true;
            }
        }
        // "nj" 에 대한 처리
        else if (inputWord[i] == 'n' && i != (inputWord.length() - 1)) {
            if (inputWord[i+1] == 'j') {
                found = true;
            }
        }
        // "s=" 에 대한 처리
        else if (inputWord[i] == 's' && i != (inputWord.length() - 1)) {
            if (inputWord[i+1] == '=') {
                found = true;
            }
        }
        // "z=" 에 대한 처리
        else if (inputWord[i] == 'z' && i != (inputWord.length() - 1)) {
            if (inputWord[i+1] == '=') {
                found = true;
            }
        }
        if (found) {
            count++;
            i += 2;
        } else {
            count++;
            i += 1;
        }
    }

    cout << count;

    return 0;
}
