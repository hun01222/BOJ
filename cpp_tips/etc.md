## 정의

 * 타입: ```typedef long long ll;```
 * 상수: ```#define mod 9901```
 * 1e9 = 1000000000
 
 ### 헤더파일
  
  ```include<bits/stdc++.h>```

## test case가 주어지지 않는 경우

```while(cin >> n)```

## 초기화

 * 배열 한번에 초기화
 ```cpp
 #include<algorithm> fill(arr, arr+n; 1) // size=n 인 arr을 1로 초기화
 fill_n(arr, n, 1) // size=n인 arr을 1로 초기화
 ```
 * 메모리 한번에 초기화: ```#include<memory.h> memset(dp, -1, sizeof(dp))```

## 포인터 참조

 * call by referecne: ```int &ret=dp[i][j];```
 
## pair, tuple

```cpp
// pair
vector<pair<int, int>> v;
v.push_back(make_pair(6, 5));
cout << v[0].fisrt << ' ' << v[0].second;

// tuple
#include<tuple>
vector<tuple<int, int, int>> v;
v.push_back(make_tuple(1, 2, 3));
cout << get<0>(v[0]) << ' ' << get<1>(v[0]) << ' ' << get<2>(v[0]);
```