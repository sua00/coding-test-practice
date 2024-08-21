#include <iostream>
//if문 연습_성적에 따라 A,B,C,D 출력하기
using namespace std;
int main(){
 int score;
 cin>>score;
 if(score>=90){
     cout<<"A";
 }else if(score>=80){
     cout<<"B";
 }else if(score>=70){
     cout<<"C";
 }else if(score>=60){
     cout<<"D";
 }else{
     cout<<"F";
 }
    return 0;
}
