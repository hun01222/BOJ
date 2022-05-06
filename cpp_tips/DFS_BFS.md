## DFS ($_{n}\mathrm{C}_{n/2}$) 일 때

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
```