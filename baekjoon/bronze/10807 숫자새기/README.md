[https://www.acmicpc.net/problem/10807](https://www.acmicpc.net/problem/10807)
​
#### **문제 : 총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.**
​
---
​
[##_Image|kage@YBk1L/btsLCtnXeeZ/O1ckEtgOqmA5mOrK0Li3h1/img.png|CDM|1.3|{"originWidth":2384,"originHeight":924,"style":"alignCenter"}_##]
​
---
​
**문제 접근 | 손코딩**
​
[##_Image|kage@CiBqD/btsLB0GrbDc/6jR5c0mmip637jXHwhJZ0K/img.png|CDM|1.3|{"originWidth":1735,"originHeight":1000,"style":"alignCenter","width":503,"height":290}_##]
​
> 그동안 흔하게 본 유형이라 금방 논리를 세웠다  
> \- 입력 받을 정수의 개수를 입력 받는다  
> \- N 개의 정수를 배열에 저장한다  
> \- 목표값 v를 받는다  
> \- 배열을 순회하며 v를 만날 때 count(사진 속 i 는 실수! 정답을 저장할 변수를 하나 더 설정해야함)를 1증가시킨다.
​
---
​
**정답 코드**
​
```
#include <iostream>
​
using namespace std;
​
int main(){
    int N,v;
    
    cin >> N;
    int* arr = new int[N];
    for (int i =0; i<N; i++){
        cin>>arr[i];
}
    cin>>v;
    int count =0;
    for(int i =0; i<N; i++){
        if (arr[i] == v){
            count++;
        }
    }
    cout << count<<endl ;
    delete[] arr;
    return 0; 
}
```
​
[##_Image|kage@dlexgN/btsLCLvaaJZ/P0Ub29qqIXpYqm1TzQP63K/img.png|CDM|1.3|{"originWidth":1164,"originHeight":72,"style":"alignCenter"}_##]
