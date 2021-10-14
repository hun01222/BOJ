#include<iostream>
#include<queue>
using namespace std;

int n, m;
int check[101][101];
int visit[101][101];
int map[101][101];
int dx[4]={1, 0, -1, 0};
int dy[4]={0, 1, 0, -1};

void BFS(int x, int y){
    visit[x][y]=1;

    queue<pair<int, int>> q;
    q.push(make_pair(x, y));

    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;

        q.pop();

        for(int i=0; i<4; i++){
            int x1=x+dx[i];
            int y1=y+dy[i];

            if(0<=x1&&x1<n&&0<=y1&&y1<m){
                if(map[x1][y1]==1&&visit[x1][y1]==0){
                    check[x1][y1]=check[x][y]+1;
                    visit[x1][y1]=1;
                    q.push(make_pair(x1, y1));
                }
            }
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            scanf("%1d", &map[i][j]);
    }

    check[0][0]=1;
    BFS(0, 0);
    cout << check[n-1][m-1];
}