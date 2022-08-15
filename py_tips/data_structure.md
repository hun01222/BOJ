## 구조

`<object_name>[<start>:<stop>:<step>]`

## 리스트 관련

### 2차원 리스트 중 두번째 값을 기준으로 정렬

```py
li.sort(key = lambda x : x[1])
```

### 리스트의 최댓값 구하기

### 리스트 초기화 방법

```py
# MAX + 1 크기 만큼 1로 초기화
dp = [1]*(MAX + 1)
```

## 딕셔너리 관련

### 딕셔너리의 최댓값 구하기

```py
max(dicts.values())
```

### 최댓값의 키값

```py
max(dicts, key = dicts.get)
```

## deque

```py
from collections import deque
```