#include <iostream>
#include <string>

using namespace std;

bool isGroupWord(const string& word) {
    bool alphabets[26] = {false};

    bool result = true;

    alphabets[word[0]-'a'] = true;
    for(int i = 1; i < word.length(); i++) {
        if (alphabets[word[i]-'a']) {
            if (word[i] != word[i-1]) {
                result = false;
                break;
            }
        } else {
            alphabets[word[i]-'a'] = true;
        }
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int count = 0;
    for(int i = 0; i < n; i++) {
        string word;
        cin >> word;

        if(isGroupWord(word)) {
            count++;
        }
    }

    cout << count;

    return 0;
}
