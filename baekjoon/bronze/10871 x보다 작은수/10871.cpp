#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, x;
    cin >> N >> x;

    int* arr = new int[N];
    vector<int> answer;

    // 배열 입력 받기
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // 조건 만족하는 값 벡터에 추가
    for (int i = 0; i < N; i++) {
        if (arr[i] < x) {
            answer.push_back(arr[i]);
        }
    }

    // 결과 출력
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }

    // 메모리 해제
    delete[] arr;

    return 0;
}
