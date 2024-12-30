//A+B 문제 : Case #a:b 의 서식에 맞춰서 출력하라
#include <iostream>
using namespace std;

int main()
{
    int T; // 반복횟수
    int* a = new int[T]; //a 값 입력
    int* b= new int[T]; //b 값 입력
    cin>>T;
    for(int i=1 ; i<=T;i++){
        cin>> a[i]>>b[i];
        cout<<"Case #"<<i<<": "<<a[i]+b[i]<<endl; //Case #n: X
    }

    return 0;
}

//11022번 문제 : 또 다른 서식 (Case #n: a+b = N)
#include <iostream>
using namespace std;

int main()
{
    int T; // 반복횟수
    int* a = new int[T]; //a 값 입력
    int* b= new int[T]; //b 값 입력
    cin>>T;
    for(int i=1 ; i<=T;i++){
        cin>> a[i]>>b[i];
        cout<<"Case #"<<i<<": "<<a[i]<<" + "<< b[i]<<" = " <<a[i]+b[i]<<endl; //Case #n: X
    }

    return 0;
}
