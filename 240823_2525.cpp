// 현재시각과 오븐구이의 필요한 시간이 주어졌을 때 조리 완료 시각을 구하는 문제
// 24시가 지난 경우의 예외 처리를 하는 부분이 어려웠다.


#include <iostream>
using namespace std;

int main()
{
    int A,B,C;
    int H,M;
    cin>>A>>B>>C;
    if(B+C<60){
        cout<<A<<" "<<B+C;
    }else if(B+C>=60){
      H = ((A*60 + B+ C)/60)%24; // 모두 분으로 바꾸어 분만의 계산으로 바꾸고, 시각과 분 출력
      M = (A*60+B+C)%60;
      cout<<H << " "<<M;
    }
    return 0;
} //이 경우는 특별히 if문을 사용하지 않아도 모든 경우에 통과됨
// 따라서 이렇게만 적어도 통과됨

#include <iostream>
using namespace std;

int main()
{
    int A,B,C;
    int H,M;
    cin>>A>>B>>C;
      H = ((A*60 + B+ C)/60)%24;
      M = (A*60+B+C)%60;
      cout<<H << " "<<M;
    
    return 0;
}

//꼭 if문을 넣고 싶어서 적어본 코드
#include <iostream>
using namespace std;

int main()
{
    int A,B,C;
    int H,M;
    cin>>A>>B>>C;
    if(B+C<60){
        cout<<A<<" "<<B+C;
    }else if(B+C>=60){
        H = A+((B+C)/60);
        M = (B+C)%60;
        if(H>=24){
            cout<<H-24<<" "<<M;
        }else if(H<24){
            cout<< H<<" "<<M;
        }
    }
    
    return 0;
}
