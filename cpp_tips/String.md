## 문자열 한번에 입력받기

 * 공백 포함하여 입력 ``` string s; getline(cin, s);```
 * 개행 포함하여 입력 ```	while(getline(cin, s)) {}```
 * 파일 끝까지 입력 ```while(cin>>x)```
 * 버퍼 지우기 ```cin.ignore() // 맨 앞의 문자 하나만 지운다.```
 
 ## ```#include<string.h>``` 관련 함수
 
  * ```char s[10]; !strcmp(s, "a"); // s와 a를 비교 맞으면 0 아니면 1```