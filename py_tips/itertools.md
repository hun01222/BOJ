## Permutations

```py
from itertools import permutations
data = [1, 2, 3]
result = list(permutations(data, 3))

>>> [(1, 2, 3), (1, 3, 2), (2, 1, 3), (2, 3, 1), (3, 1, 2), (3, 2, 1)]
```

## Combination

```py
from itertools import combinations
data = [1, 2, 3]
result = list(combinations(data, 2))

>>> [(1, 2), (1, 3), (2, 3)]
```

## Product (중복 순열)

```py
from itertools import product
data = [1, 2, 3]
result = list(product(data, repeat = 2))

>>> [(1, 1), (1, 2), (1, 3), (2, 1), (2, 2), (2, 3), (3, 1), (3, 2), (3, 3)]
```

## combinations_with_replacement (중복 조합)

```py
from itertools import combinations_with_replacement
data = [1, 2, 3]
result = list(combinations_with_replacement(data, 2))

>>> [(1, 1), (1, 2), (1, 3), (2, 2), (2, 3), (3, 3)]
```

## 응용
 - 백준 18290.py

```py
all_combi = combinations(product([x for x in range(n)],
                                 [y for y in range(m)]), k)
```