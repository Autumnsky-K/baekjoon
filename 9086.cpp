#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;

        // C++에는 s.front() s.back()으로 가장 첫 글자와 가장 마지막 글자를 가져올 수 있다.
        // cout << s[0] << s[s.length()-1] << "\n";
        cout << s.front() << s.back() << "\n";
    }

    return 0;
}
