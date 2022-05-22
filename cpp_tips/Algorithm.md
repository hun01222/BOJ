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
	* 시간복잡도: $O(V^2)$, 공간복잡도: $O(V^2)$
	*

#### Bellman-Ford-Moore algorithm

* 가중 그래프에서의 단일 쌍, 단일 출발, 단일 도착 최단 경로 문제

#### Floyd-Washall algorithm

* 전체 쌍 최단 경로 문제
