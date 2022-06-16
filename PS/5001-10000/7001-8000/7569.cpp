#include<iostream>
#include<queue>
using namespace std;

int n, m, h;
int map[101][101][101];
int dx[6]={1, 0, 0, -1, 0, 0};
int dy[6]={0, 1, 0, 0, -1, 0};
int dz[6]={0, 0, 1, 0, 0, -1};

struct tomato{
    int z, y, x;
};

queue<tomato> q;

void BFS(){
    while(!q.empty()){
        int z=q.front().z;
        int y=q.front().y;
        int x=q.front().x;
        q.pop();

        for(int i=0; i<6; i++){
            int z1=dz[i]+z;
            int y1=dy[i]+y;
            int x1=dx[i]+x;

            if(((0<=x1&&x1<n)&&(0<=y1&&y1<m)&&(0<=z1&&z1<h))&&map[z1][y1][x1]==0){
                map[z1][y1][x1]=map[z][y][x]+1;
                q.push({z1, y1, x1});
            }
        }
    }
}

int main(){
    cin >> n >> m >> h;
    for(int i=0; i<h; i++){
        for(int j=0; j<m; j++){
            for(int k=0; k<n; k++){
                cin >> map[i][j][k];
                if(map[i][j][k]==1)
                    q.push({i, j, k});
            }
        }
    }

    BFS();

    int result=0;
    for(int i=0; i<h; i++){
        for(int j=0; j<m; j++){
            for(int k=0; k<n; k++){
                if(map[i][j][k]==0){
                    cout << "-1";
                    return 0;
                }
                result=result>map[i][j][k]?result:map[i][j][k];
            }
        }
    }
    cout << result-1;
}
