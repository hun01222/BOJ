## DFS

* 처음에 여러개의 push가 있는 문제는 DFS로!

### DFS combination 일 때

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

### DFS n! 일 때
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

## BFS