//첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제_별찍기문제
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;// 반복횟수
    string l;
    cin>>N;
    for(int i=1; i<=N;i++){
    l +="*";
    cout<<l<<endl;}
    
    return 0;
}
