#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;

    vector<string> dial = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

    int sum = 0;
    for (char c: s) {
        for (int i = 0; i < dial.size(); i++) {
            if (dial[i].find(c) != string::npos) {
                sum += (i+3);
                break;
            }
        }
    }

    cout << sum;

    return 0;
}
