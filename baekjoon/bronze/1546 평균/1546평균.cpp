#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int* score = new int[N];
    
    for (int i = 0; i < N ; i++){
        cin >> score[i];
    }
   double max_score = *max_element(score, score+N);
    
    double* fixed_score = new double[N];
    for(int i = 0 ; i < N ; i++){
        fixed_score[i] = score[i]/max_score * 100;
    }
    double sum =0;
    for (int i = 0; i<N ; i++){
        sum += fixed_score[i];
    }
   double average = sum/N;
    cout << average;
    
    return 0;
}
