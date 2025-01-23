#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    // 문자열을 뒤집음
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    // 뒤집은 값을 정수로 변환하고 비교
    int reversedA = stoi(A);
    int reversedB = stoi(B);

    cout<< max(reversedA, reversedB);

    return 0;
}

}
