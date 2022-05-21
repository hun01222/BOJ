## B-tree의 부모찾기

* 2차원 백터 vector<int> v[max] 이용, DFS로 찾기

## dijkstra
  
* priority_queue 사용 최소힙 구현

## 정렬

### 내림차순 sorting

* ```#include<fuctional> sort(v.begin(), v.end(), greater<>());```

### 순서쌍 정렬

```cpp
pair<int, int> arr[100];
sort(arr, arr+n);
arr[1].first, arr[1].second;
```