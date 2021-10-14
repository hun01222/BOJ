#include<iostream>
#include<queue>
using namespace std;

char map[50][50]={0, };
char check[50][50]={0, };
int n, m;
int dx[4]={1, 0, -1, 0};
int dy[4]={0, 1, 0, -1};
queue<pair<int, int>> q;

void BFS(){
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();

        for(int i=0; i<4; i++){
            int x1=x+dx[i];
            int y1=y+dy[i];

            if((0<=x1&&x1<n&&0<=y1&&y1<m)&&check[x1][y1]==0&&map[x1][y1]=='L'){
                check[x1][y1]=check[x][y]+1;
                q.push({x1, y1});
            }
        }
    }
}

int main(){
    int max=0;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> map[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(map[i][j]=='L'){
                q.push({i, j});
                check[i][j]=1;
                BFS();
                for(int a=0; a<n; a++){
                    for(int b=0; b<m; b++){
                        max=max>check[a][b]?max:check[a][b];
                        //printf("%d ", check[a][b]);
                        check[a][b]=0;
                    }
                }
            }
        }
    }

    cout << max-1;
}