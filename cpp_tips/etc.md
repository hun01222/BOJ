## 정의

 * 타입: ```typedef long long ll;```
 * 상수: ```#define mod 9901```
 
 ### 헤더파일
  
  ```include<bits/stdc++.h>```

## test case가 주어지지 않는 경우

```while(cin >> n)```

## 초기화

 * 배열 한번에 초기화: ```#include<algorithm> fill(arr, arr+n; 1) // size=n 인 arr을 1로 초기화```
 * 메모리 한번에 초기화: ```#include<memory.h> memset(dp, -1, sizeof(dp))```

## 포인터 참조

 * call by referecne: ```int &ret=dp[i][j];```
 
## 순서쌍 정렬

```cpp
pair<int, int> arr[100];
sort(arr, arr+n);
arr[1].first, arr[1].second;
```

## 펠린드롬

```cpp
bool IsPalindrome(string str){
	string front, back;
	
	front=str;
	reverse(str.begin(), str.end());
	back=str;
	
	if(front==back)
		return true;
	else
		return false;
}
```

## 소수를 구할 때 $\sqrt{n}$ 까지만 나누면 됨

```cpp
bool IsPrime(int num){
	if(num<2)
		return false;
	
	for(int i=2; i<=sqrt(num); i++){
		if(num%i==0)
			return false;
	}
	
	return true;
}
```