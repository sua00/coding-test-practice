#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int* arr = new int[N];
    for (int i = 0; i < N ; i++){
        cin >> arr[i];
    }
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < N ; i++){
        if(arr[i] < min){
            min = arr[i];
        }else if(arr[i] > max){
            max = arr[i];
        }
    }
    
    cout << min << " "<<max <<endl;
    return 0;
}
