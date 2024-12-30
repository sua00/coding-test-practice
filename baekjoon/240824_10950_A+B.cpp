//for문_주어진 횟수만큼 주어지는 숫자의 합을 구해라
//배열의 크기가 유동적으로 변경되어야 할 때 동적 할당을 이용한 배열 선언이 효율적이다.
#include <iostream>
using namespace std;

int main()
{
    int T;
    int* a = new int[T];
    int* b = new int[T];
    
    cin>>T;
    for(int i = 0;i<T;i++){
    cin>>a[i]>>b[i];
    cout<<a[i]+b[i]<<endl;
    }
    return 0;
}
