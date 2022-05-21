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