#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string S;
    cin >> S;

    // 알파벳 소문자 위치 저장용 배열 (-1로 초기화)
    vector<int> alphabet(26, -1);

    // 단어 S에서 각 알파벳의 첫 등장 위치를 기록
    for (int i = 0; i < S.length(); i++) {
        int index = S[i] - 'a'; // 알파벳 'a'를 0으로 변환
        if (alphabet[index] == -1) {
            alphabet[index] = i; // 첫 등장 위치 기록
        }
    }

    // 결과 출력
    for (int i = 0; i < 26; i++) {
        cout << alphabet[i] << " ";
    }

    return 0;
}
