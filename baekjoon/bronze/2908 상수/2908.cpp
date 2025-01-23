#include <iostream>
#include <string>

using namespace std;

int main(){
    string num1, num2;
    cin >> num1 >> num2;
    
    char temp ;
    
    temp = num1[2];
    num1[2]=num1[0];
    num1[0]=temp;
    int number1 = stoi(num1);
    
    temp = num2[2];
    num2[2]=num2[0];
    num2[0]=temp;
    int number2 = stoi(num2);
    
    cout << max(number1,number2);
    
    return 0;
    
}
