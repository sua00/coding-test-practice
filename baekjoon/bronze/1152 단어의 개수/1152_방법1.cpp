#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s); // 공백 포함 전체 문장 입력 받기

    // 공백만 입력된 경우 처리
    if (s.empty()) {
        cout << 0 << endl;
        return 0;
    }

    int word_count = 0;
    bool in_word = false;

    for (char c : s) {
        if (c == ' ') { // 공백을 만나면 단어가 끝남
            if (in_word) {
                word_count++;
                in_word = false;
            }
        } else { // 공백이 아니면 단어의 일부
            in_word = true;
        }
    }

    // 마지막 단어 처리
    if (in_word) {
        word_count++;
    }

    cout << word_count << endl; // 단어 개수 출력

    return 0;
}
