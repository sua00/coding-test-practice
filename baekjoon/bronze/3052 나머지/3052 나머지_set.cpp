#include <iostream>
#include <set> // set 라이브러리 포함

using namespace std;

int main() {
    int arr[10];
    set<int> mod; // 중복 제거를 위한 set 선언

    // 입력 및 나머지 계산
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        mod.insert(arr[i] % 42); // set에 나머지 삽입 (중복 제거)
    }

    // 서로 다른 나머지 개수 출력
    cout << mod.size();
    return 0;
}
