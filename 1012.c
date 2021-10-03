#include <stdio.h>

int map[51][51]={0, };
int visit[51][51]={0, };
int t, n, m, k, i, j, cnt_complex;

void DFS(i, j){
    if(map[i][j]==1&&visit[i][j]==0){
        visit[i][j]=1;
        DFS(i+1, j);
        DFS(i-1, j);
        DFS(i, j+1);
        DFS(i, j-1);
    }
}

int main(){
    scanf("%d", &t);
    for (int a = 0; a < t; a++){
        cnt_complex=0;

        for(int x=0;x<51;x++){
            for(int y=0;y<51;y++){
                map[x][y]=0;
                visit[x][y]=0;
            }
        }
        // map, visit 초기화 어떻게하지

        scanf("%d %d %d", &n, &m, &k);
        for (int b=0; b<k; b++){
            scanf("%d %d", &i, &j);
            i++;
            j++;
            map[i][j]=1;
        }

        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(map[i][j]==1&&visit[i][j]==0){
                    DFS(i, j);
                    cnt_complex++;
                }
            }
        }

        printf("%d\n", cnt_complex);
    }

    return 0;
}