#include <iostream>
#include <string>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int r;
        string s;
        cin >> r >> s;

        for (char c: s) {
            cout << string(r, c);
        }
        cout << "\n";
    }

    // 1. 기존 방법
    // for (int i = 0; i < t; i++) {
    //     int r;
    //     string s;
    //     cin >> r >> s;
    //     for (int j = 0; j < s.size(); j++) {
    //         for (int k = 0; k < r; k++) {
    //             cout << s[j];
    //         }
    //     }
    //     cout << "\n";
    // }

    return 0;
}
