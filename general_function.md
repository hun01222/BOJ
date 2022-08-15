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
	
	for(int i=2; i*i<=num; i++){
		if(num%i==0)
			return false;
	}
	
	return true;
}
```

## D&C와 bitmarking을 이용한 거듭제곱

```cpp
ll power(ll n, ll m){
	ll ans=1;
	while(m){
		if(m&1) // m이 홀수이면
			ans=ans*n%MOD;
		m/=2;
		n=n*n%MOD;
	}
	return ans;
}
```

## 완전제곱 판별 알고리즘

```cpp
bool IsSquare(int n){
	root=(int)sqrt(n);
	if(root*root==n)
		return true;
	return false;
}
```

# 정수론 관련 알고리즘

## Euclid algorithm

```cpp
int GCD(int a, int b){
	if(a%b==0)
		return b;
	return GCD(b, a%b);
}
```

## Sieve of Eratosthenes

```cpp
vector<int> Eratosthenes(gcd, 1);
Eratosthenes[1]=0;
for(int i=2; i*i<=gcd; i++){
	for(int j=i*2; j<=gcd; j+=i)
		if(Eratosthenes[i]==1)
			Eratosthenes[j]=0;
}
```

## fibonaci

```cpp
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef vector<vector<ll>> matrix;

// 행렬 곱 연산자
matrix operator * (const matrix &a, const matrix &b){
	ll size=a.size();
	matrix res(size, vector<ll>(size));

	for(ll i=0; i<size; i++)
		for(ll j=0; j<size; j++){
			for(ll k=0; k<size; k++)
				res[i][j]+=a[i][k]*b[k][j];
			res[i][j]%=MOD;
		}
	
	return res;
}

// 행렬 제곱 함수 (O(log n))
matrix power(matrix a, ll n){
	ll size=a.size();
	matrix res(size, vector<ll>(size));
	
	for(ll i=0; i<size; i++)
		res[i][i]=1;

	while(n>0){
		if(n%2==1)
			res=res*a;
		n/=2;
		a=a*a;
	}
	
	return res;
}
```

## Eulur phi function

```cpp
	ll ans=n;
	for(ll i=2; i<=sqrt(n); i++){
		if(n%i==0)
			ans=ans/i*(i-1);
		while(n%i==0)
			n/=i;
	}
	if(n!=1)
		ans=ans/n*(n-1);
```

## 약수 관련

### 약수의 합 구하기

```py
# N 이하의 자연수 중에서 i 를 약수로 갖는 개수는 N/i 개이다.

ans = 0
for i in range(1, n + 1):
	ans += (n // i) * i
```

### 약수 구하기 O(n*root(n))

```py
def GetDivisor(n):
  divisors_list = []
  
  for i in range(1, int(n**(1/2)) + 1):
    if n % i == 0:
      divisors_list.append(i)
      if i**2 != n:
        divisors_list.append(n // i)
  divisors_list.sort()
  
  return divisors_list
```

## 중국인의 나머지 정리 예시 (6064 카잉 달력)

```py
def check(m, n, x, y):
  while x <= m * n:
    if (x - y) % n == 0:
    	return x
    x += m
  return -1
```