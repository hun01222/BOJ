#include<iostream>
#include<queue>
using namespace std;

int n, m;
int map[1001][1001];
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

            if((0<=x1&&x1<n&&0<=y1&&y1<m)&&(map[x1][y1]==0)){
                map[x1][y1]=map[x][y]+1;
                q.push(make_pair(x1, y1));
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> map[i][j];
            if(map[i][j]==1)
                q.push(make_pair(i, j));
        }
    }

    BFS();

    int result=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(map[i][j]==0){
                cout << "-1";
                return 0;
            }
            result=result>map[i][j]?result:map[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << map[i][j] << " ";
        }
        cout << "\n";
    }

    cout << result-1;
}