## 문자열 한번에 입력받기

 * 공백 포함하여 입력 ``` string s; getline(cin, s);```
 * 개행까지 포함하여 입력 문자 하나만 입력 ```char a; a=cin.git();```
 * 문단이 들어올 때 끝내기 ```	while(1){
		getline(cin, s);
		if(s=="")
			break;
	}```
 * 버퍼 지우기 ```cin.ignore() // 맨 앞의 문자 하나만 지운다.```