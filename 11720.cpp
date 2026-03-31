#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string numbers;
    cin >> numbers;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += numbers[i] - '0';
    }

    cout << sum;
    return 0;
}
