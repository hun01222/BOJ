## vector
* 함수의 input이 vector인 경우 ```vector<int> &vect // call by reference로 해야 됨```

## queue

* ``` vector<int> v(0,2) ```와 ``` vector<int> v[2] ``` 는 모두 2차원 백터(벡터의 배열)을 초기화한다.
* 큐를 비우기 ```while(!q.empty()) q.pop()```
* 순서쌍 큐

```cpp
struct a{
int x, y, z;
};
queue<a> q; // 선언

q.front().x; // 참조

q.push({x, y, z}); // 삽입
```

* 우선순위 큐(절댓값 힙)
```cpp
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // priority_queue<자료형, 구현체, 비교 연산자>

pq.push(make_pair(a, b));
```

## deque

* left와 right를 활용하여 크기비교
* ```deque<int> dq(5,2); // size=5만큼 2로 초기화```

## map

* 반복문에서 원소 참조 ```for(auto a=map.begin(); a!=map.end(); a++){string name=a->first; float n=a->second;}```
* map을 배열처럼 이용 가능 ```map<string, int> ma; ma[temp]++;```

## 공용체와 열거체

### 공용체(Union)

 * 모든 맴버 변수가 하나의 메모리 공간을 공유함
 * 공용체는 한 번에 하나의 멤버 변수밖에 사용할 수 없음
 
```cpp
typedef union{
    unsigned char a;
    unsigned short b;
    unsigned int c;
}SHAREDATA;

int main(void){
	SHAREDATA var;
	var.c = 0x12345678;  
}
```

### 열거체(enumerated typed)

 * 새로운 타입을 선언하면서 동시에 해당 타입이 가질 수 있는 정수형 상숫값도 같이 명시
 
```cpp
enum Weather{SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30};
```