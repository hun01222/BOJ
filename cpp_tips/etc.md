## 정의

 * 타입: ```typedef long long ll;```
 * 상수: ```#define mod 9901```
 
 ### 헤더파일
  
  * ```include<bits/stdc++.h>```

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