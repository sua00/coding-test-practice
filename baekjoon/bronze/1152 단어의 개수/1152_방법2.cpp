#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    // 입력을 받을 문자열
    string input;

    // 한 줄의 입력을 받음
    getline(cin, input);

    // stringstream을 사용해 단어를 분리
    stringstream ss(input);
    string word;
    int wordCount = 0;

    // 공백으로 나누어진 단어를 카운트
    while (ss >> word) {
        wordCount++;
    }

    // 결과 출력
    cout << wordCount << endl;

    return 0;
}
