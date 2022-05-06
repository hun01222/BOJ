## queue

* ``` vector<int> v(0,2) ```와 ``` vector<int> v[2] ``` 는 모두 2차원 백터(벡터의 배열)을 초기화한다.
* 큐를 비우기 ```while(!q.empty()) q.pop()```

## deque

* left와 right를 활용하여 크기비교
* ```deque<int> dq(5,2); // size=5만큼 2로 초기화```

## map

* 반복문에서 원소 참조 ```for(auto a=map.begin(); a!=map.end(); a++){string name=a->first; float n=a->second;}```
* map을 배열처럼 이용 가능 ```map<string, int> ma; ma[temp]++;```


