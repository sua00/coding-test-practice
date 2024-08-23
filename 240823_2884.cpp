//if문 관련 문제 _ 주어진 시간 보다 45분 이전의 시간을 출력 시켜라
#include <iostream>
using namespace std;

int main()
{
    int H,M;
    cin>>H>>M;
    if(M>=45){
        cout<<H<<" "<<(M-45);
    }else if(M<45 && H>0){
        H = H-1;
        M=60-(45-M);
        cout<<H<<" "<<M;
    }else if(M<45 && H==0){
        H = 23;
        M = 60-(45-M);
        cout<<H<<" "<<M;
        }else{return 0;}

    return 0;
}
