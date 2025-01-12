#include <iostream>
#include <algorithm> // reverse를 사용하기 위해 추가

using namespace std;

int main() {
    int N, M, n, m;
    cin >> N >> M;

    int* arr = new int[N];
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < M; i++) {
        cin >> n >> m;

        // reverse 함수로 n~m 범위를 뒤집기
        reverse(arr + (n - 1), arr + m);
    }

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr; // 동적 메모리 해제
    return 0;
}
