#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    int sum = 0;
    string s;
    cin >> N;
    cin >> s;
    for (int i = 0; i <N; i++){
        sum += int(s[i])-48;
    }
    cout << sum ;
    return 0;
}
