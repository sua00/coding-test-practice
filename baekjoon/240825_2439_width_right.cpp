//별찍기 문제_오른쪽 정렬_width,right 사용
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;// 반복횟수
    string l;
    cin>>N;
    for(int i=1; i<=N;i++){
    cout.width(N);
    l +="*";
    cout<<right<<l<<endl;}
    
    return 0;
}
