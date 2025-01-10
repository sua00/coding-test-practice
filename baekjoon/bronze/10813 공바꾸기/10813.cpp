#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    int* arr = new int[N]; // 동적 배열 할당
    for (int i = 0; i < N; i++) {
       arr[i] =i+1;
    } 
    
    int a = 0;
    int b = 0;
    int temp = 0;
    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        temp = arr[a-1];
        arr[a-1] = arr[b-1];
        arr[b-1] = temp;
    }
    
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    
    delete[] arr; // 동적 메모리 해제
    return 0;
}
