#include <iostream>
//A,B를 입력받아 조건에 출력
using namespace std;
int main(){
 int A,B;
 cin>>A>>B;
 if(A>B){
     cout<<">";}
 else if(A<B){
     cout<<"<";}
 else if(A==B){
     cout<<"==";
 }
return 0;
}
