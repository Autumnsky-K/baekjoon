#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c;
    cin >> c;

    // cout << (int)c;
    // (int)c => C언어 스타일
    // static_cast<int>(c) => C++ 스타일
    cout << static_cast<int>(c);

    return 0;
}
