## 🔍 3052. 나머지(Bronze2)
[문제 보러가기](https://www.acmicpc.net/problem/3052)
### 문제
두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다. 

수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.
### 분류
- 일차원 배열
- for문
- 집합(set)
---
### 예제 설명
![image](https://github.com/user-attachments/assets/0171869b-ec76-450f-a697-d5dd493168a6)


### 접근 방법  
- 숫자를 입력 받을 배열 생성(arr)
- 입력 받은 숫자를 42로 나눈 나머지를 담을 배열 생성(mod)
- mod[i]를 현재값이라 할 때 현재값이 mod[i] 이 후 모든 값과 다르다면 cnt 증가
- cnt 출력
  ![image](https://github.com/user-attachments/assets/c096c6c1-4fa0-42fe-8276-ea0df1429d89)
---
### set
- set 자료구조를 사용하여 해결도 가능하다
---
### 결과
#### 메모리
2056KB
#### 시간
0ms
