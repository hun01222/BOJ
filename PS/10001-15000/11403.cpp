#include<iostream>
using namespace std;

int n;
int graph[101][101]={0, };

void floyd_warshall(){
	for(int via=0; via<n; via++)
		for(int from=0; from<n; from++){
			if(!graph[from][via])
				continue;
			for(int to=0; to<n; to++){
				if(!graph[via][to])
					continue;
				graph[from][to]=1;
			}
		}
}

int main(){
	cin >> n;
	for(int from=0; from<n; from++)
		for(int to=0; to<n; to++)
			cin >> graph[from][to];
	
	floyd_warshall();
	
	for(int from=0; from<n; from++){
		for(int to=0; to<n; to++)
			cout << graph[from][to] << ' ';
		cout << "\n";
	}
}