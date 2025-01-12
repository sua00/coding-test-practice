#include <iostream>

using namespace std;

int main(){
    int N, M,n,m;
    cin >> N >> M;
    
    int* arr = new int[N];
    for (int i =0 ; i < N; i++){
        arr[i] = i+1;
    }
    
    for(int i = 0; i < M ; i++){
        cin >> n >> m;
        int temp_size = m-n+1;
        int* temp = new int[temp_size];
           for(int j = 0 ; j < temp_size ; j++){
               temp[j] = arr[n-1+j];
        }
           for(int j = 0 ; j < temp_size ; j++){
                arr[n-1+j] = temp[temp_size-1-j] ;
            }
             delete[] temp;
    }
    
    for(int i = 0; i < N; i++){
        cout << arr[i]<<" ";
    }
    
    return 0;
}
