#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> chess = {1, 1, 2, 2, 2, 8};

    for (int i = 0; i < 6; i++) {
        int current;
        cin >> current;

        cout << chess[i] - current << (i == 5 ? "\n" : " ");
    }

    return 0;
}
