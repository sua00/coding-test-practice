#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'c') {
            if (i + 1 < s.length() && (s[i+1] == '=' || s[i+1] == '-')) {
                i++;
            }
        } else if (s[i] == 'l') {
            if (i + 1 < s.length() && s[i+1] == 'j') {
                i++;
            }
        } else if (s[i] == 'n') {
            if (i + 1 < s.length() && s[i+1] == 'j') {
                i++;
            }
        } else if (s[i] == 's') {
            if (i + 1 < s.length() && s[i+1] == '=') {
                i++;
            }
        } else if (s[i] == 'z') {
            if (i + 1 < s.length() && s[i+1] == '=') {
                i++;
            }
        } else if (s[i] == 'd') {
            if (i + 1 < s.length() && s[i+1] == '-') {
                i++;
            } else if (i + 2 < s.length() && s[i+1] == 'z' && s[i+2] == '=') {
                i += 2;
            }
        }
        cnt++;  // 매 글자 또는 크로아티아 알파벳 하나마다 count 증가
    }
    
    cout << cnt << endl;
    return 0;
}
