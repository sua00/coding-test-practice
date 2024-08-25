//A+B 문제이나 마지막에 break되는 조건이 들어옴을 이용하여 작성한 코드
#include <iostream>
using namespace std;

int main() {
    int A, B;
    
    while (true) {
        cin >> A >> B;
        if (A == 0 && B == 0) {
            break;  // A와 B가 모두 0이면 반복을 종료
        }
        cout << A + B << '\n';  // A와 B의 합을 출력
    }
    
    return 0;
}
