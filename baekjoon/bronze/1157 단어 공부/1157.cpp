#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >>s;
    int result[26]={0};
    
    for (int i =0; i<s.length();i++){
        s[i] = toupper(s[i]);
        result[s[i]-'A']+=1;
    }
    int maxCount = 0;
    int maxIndex =0;
    int cnt =0;
    
    for(int i = 0; i <26;i++){
        if(result[i]>maxCount){
            maxCount = result[i];
            maxIndex = i;
            cnt =1;
        } else if(result[i] == maxCount){
            cnt++;
        }
    }
    if(cnt == 1){
        cout << char(maxIndex+'A')<<endl;
    }else {cout<< "?"<< endl;}
    
    return 0;
}
더 깔끔하게 쓸 수는 없을까?
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count[26] = {0}; // 알파벳 개수 카운트 (A~Z)

    // 모든 문자를 대문자로 변환하고 카운트
    for (char c : s) {
        c = toupper(c); // 대문자로 변환
        count[c - 'A']++; // 해당 알파벳 카운트 증가
    }

    int maxCount = 0;
    char mostUsed = '?';
    bool isDuplicate = false; // 최빈 알파벳이 여러 개인지 확인용

    // 최빈 문자 찾기
    for (int i = 0; i < 26; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostUsed = 'A' + i; // 가장 많이 나온 알파벳
            isDuplicate = false; // 새 최댓값이 나오면 중복 플래그 초기화
        } else if (count[i] == maxCount) {
            isDuplicate = true; // 같은 최댓값이 또 나오면 중복 플래그 설정
        }
    }

    // 출력
    if (isDuplicate) {
        cout << '?' << endl;
    } else {
        cout << mostUsed << endl;
    }

    return 0;
}
