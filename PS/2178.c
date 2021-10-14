#include<stdio.h>

int map[101][101]={0,};
int visited[101][101]={0,};
int answer[10000]={0,};
int x, y, cnt=0, cnt_answer=0;

void DFS(x, y){
    if(map[x][y]==1&&visited==0){
        visited[x][y]=1;
        cnt++;
        DFS(x+1,y);
        DFS(x-1,y);
        DFS(x,y+1);
        DFS(x,y-1);
    }
    else if(x==m&&y==n){
        answer[cnt_answer]=cnt;
        cnt_answer++;
        return;
    }
}

void Solution(){
    DFS(1,1);
}

int min(int* arr){
    int minimum=10000;
    for(int i=0; i<cnt; i++){
        arr[i] < minimum ? minimum : arr[i];
    }
    return minimum;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            scanf("%1d",map[i][j]);
        }
    }

    Solution();
    printf("%d", min(answer));

    return 0;
}