from collections import deque

n, k, m = map(int, input().split())
queue = deque(range(1, n + 1))
i = 0
while queue:
  if (i // m) % 2 == 0:
    for _ in range(k - 1):
      queue.append(queue.popleft())
  else:
    for _ in range(k):
      queue.appendleft(queue.pop())
  i += 1
  print(queue.popleft())