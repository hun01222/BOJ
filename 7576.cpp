#include<iostream>
using namespace std;

int map[1001][1001];
int check[1001][1001];
int visit[1001][1001];
int dx[4]={1, 0, -1, 0};
int dy[4]={0, 1, 0, -1};

void BFS(){ 
    visit[0][0]=1;
}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cin >> map[i][j];
    }

    BFS();
}