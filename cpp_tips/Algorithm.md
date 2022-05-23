## B-tree의 부모찾기

* 2차원 백터 vector<int> v[max] 이용, DFS로 찾기

## 정렬

### 내림차순 sorting

* ```#include<fuctional> sort(v.begin(), v.end(), greater<>());```

### 순서쌍 정렬

```cpp
pair<int, int> arr[100];
sort(arr, arr+n);
arr[1].first, arr[1].second;
```

### 여러가지 조건으로 정렬

```cpp
bool cmp(info x, info y){
	if(x.a>y.a)
		return true;
	else if(x.a==y.a){
		if(x.b<y.b)
			return true;
		else if(x.b==y.b){
			if(x.c>y.c)
				return true;
			else if(x.c==y.c)
				if(x.d<y.d)
					return true;
				
		}
	}
	return false;
}
```

## DFS&BFS

### DFS

* 처음에 여러개의 push가 있는 문제는 brute-force로!

#### DFS combination 일 때

```cpp
for(int i=idx; i<n; i++){
	if(team[i])
		continue;
	else{
		team[i]=true;
		DFS(cnt+1, i);
		team[i]=false;
	}
}

#### DFS n! 일 때
//next_permutation 사용
#include<algorithm>

for(int i=0; i<4; i++)
	v[i]=1;

do{
	for(int i=0; i<4; i++)
		cout << v[i] << " ";
	cout << "\n";
}while(next_permutation(v.begin(), v.end()));
```

### BFS

## 최단 경로 알고리즘

### 최단 경로 문제의 종류

 * 단일 출발 (single-source) 최단 경로: 하나의 정점에서 출발하여 다른 모든 정점까지의 최단 경로를 찾는 문제
 * 단일 도착 (single-destination) 최단 경로: 모든 정점에서 출발하여 하나의 정점까지의 최단 경로를 찾는 문제, 그래프를 뒤집으면 단일 출발 최단거리 문제로 바뀜
 * 단일 쌍 (single-pair) 최단 경로: 모든 정점 쌍들 사이의 최단 경로를 찾는 문제

### 주요 알고리즘

#### BFS(완전 탐색 알고리즘)

 * 가중치가 없거나 모든 가중치가 동일한 그래프에서의 최단경로

#### dijkstra algorithm

 * 음이 아닌 가중 그래프에서의 단일 쌍, 단일 출발, 단일 도착 최단 경로 문제
 * V개의 정점과 음수가 아닌 E개의 간선을 가진 그래프 G에서 특정 출발 정점(S)에서 부터 다른 모든 정점까지의 최단경로를 구하는 알고리즘

 * 인접 행렬 방식
	* 시간 복잡도: O(V^2), 공간 복잡도: O(V^2)
 	1. D[S]=0 (출발점을 0으로 저장)
 	2. 방문하지 않은 정점 중에서 D[K]가 최소인 정점 I 선택
 	3. D[J]=D[I]+W로 갱신
 * 최소 힙 방식
 	* 시간 복잡도: O(ElogV), 공간 복잡도: O(E+V)
	1. D[S]=0 (출발점을 0으로 저장) + 최소 힙에 출발점 S 삽입
	2. 최소 힙에서 맨 위에 있는 정점 I 꺼냄
	3. D[J]=D[I]+W로 갱신 + 최소 힙에 정점 J 삽입

#### Bellman-Ford-Moore algorithm

 * 가중 그래프에서의 단일 쌍, 단일 출발, 단일 도착 최단 경로 문제
 	* 시간 복잡도 O(VE)

#### Floyd-Washall algorithm

 * 전체 쌍 최단 경로 문제
	 * 시간 복잡도: O(V^3), 공간 복잡도: O(V^2)