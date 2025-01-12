#include <iostream>

using namespace std;

int main(){
    int arr[10];
    int mod[10];
    for (int i = 0; i<10; i++){
        cin>> arr[i];
        mod[i] = arr[i]%42;
    } int cnt = 0;
    for(int i = 0; i<10 ;i++){
        bool isUnique = true;
        for(int j = i+1; j < 10 ;j++){
             if(mod[i] == mod[j]){
                 isUnique = false;
                 break;
             }
        }
        if(isUnique){
            cnt++;
        }
    }
    cout <<cnt;
    return 0;
}
