#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= (2*n-1); i++) {
        // n이 5일 경우
        // 1 -> 1
        // 2 -> 3
        // 3 -> 5
        // 4 -> 7
        // 5 -> 9
        // 6 -> 7
        // 7 -> 5
        // 8 -> 3
        // 9 -> 1
        // 절대값을 활용하면 될 것 같다.
        int stars = (2 * (n - abs(n-i))) - 1;
        int blanks = abs(n-i);
        cout << string(blanks, ' ') << string(stars, '*') << "\n";
    }

    return 0;
}
