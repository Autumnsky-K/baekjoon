#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> result(26, -1);

    string s;
    cin >> s;

    // "abcd...z" 까지 반복시키는게 아니라
    // 입력 받은 문자열을 반복?
    for (int i = 0; i < s.size(); i++) {
        int apb = s[i] - 'a';
        if (result[apb] == -1) {
            result[apb] = i;
        }
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << (i == (result.size()-1) ? "\n" : " ");
    }
    return 0;
}
