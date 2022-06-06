## 소수점 표현

```cpp
cout << fixed;
cout.precision(4); // 소숫점 넷째자리까지
```

## 절댓값

 * 정수인 경우: ```#include<stdlib.h> abs(int num);```
 * 실수인 경우: ```#include<math.h> fabs(double num);```
 
## 기호

 * 제곱: ```#include<cmath> pow(double base, doulbe exponent);```
 * 제곱근: ```#include<cmath> sqrt(double num);```

## 진수

 * 16진수: %x, 8진수: %o
 
## 실수 자료형일 경우
 항상 double로!!
 
## 1e9+7 = 1000000007, 2e9 = 2000000000

# 정수론

## 잉여역수

 * 정수 x에 대한 합동방정식 $ax≡1 (mod m)$이 성립할 때, x를 a의 법 m에 대한 잉여역수라고 한다.
 * 법 4에 대한 3의 잉여역수는 3, 7, 11, 15 등이 있다.
 
## Fermat's little Theorem

 * p가 소수이면, 모든 정수 a에 대해 a^p≡a(mod p)이다.
 * p가 소수이고 a가 p의 배수가 아니면, a^(p-1)≡1(mod p)이다.