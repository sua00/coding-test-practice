## 🔍 1152. 단어의 개수(Bronze2)
[문제 보러가기](https://www.acmicpc.net/problem/1152)
### 문제
영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.
![image](https://github.com/user-attachments/assets/35d63148-1c1e-4ecf-abcb-5bfc75642bbd)



### 분류
- 문자열
- stringstream
---
### (틀린) 접근 방법
- 문자열을 입력받는다
- 문자열의 띄어쓰기 수를 계산해 +1 해준다
> 문제점 : 공백이 주어진 경우와 단어 1개만 주어진 경우에 대해서 오답 발생
> 즉 : 단어의 개수를 count해주는게 맞다
---
### 결과1 : 띄어쓰기를 기준으로 단어의 개수를 count 해 주되,예외 처리를 통해 세어줌
#### 메모리
5020 KB
#### 시간
36ms
---
### 결과2 : stringstream을 사용하여 단어의 수 카운트
#### 메모리
6072 KB
#### 시간
48ms
