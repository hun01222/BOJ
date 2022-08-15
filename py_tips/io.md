## print 관련 함수

```py
print(n, '=', " + ".join(str(i) for i in li))
```

## 입력의 크기가 없는 경우

```py
while True:
  try:
    n = int(input())
  except:
    break
```

## 2차원 배열의 입력

```py
arr = [list(map(int, input().split())) for _ in range(n)]
```

## input 이 많으면

```py
import sys
sys.stdin.readline
```