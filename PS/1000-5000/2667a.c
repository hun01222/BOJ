#include <stdio.h>
#define SWAP(a,b)  {int t; t = a; a=b; b=t;}

int map[26][26]={0, };
int visit[26][26]={0, };
int complex[26*26/2+1]={0, };
int n, i, j, cnt_house=0, cnt_complex=0;

void DFS(i, j){
    if(map[i][j]==1&&visit[i][j]==0){
        visit[i][j]=1;
        cnt_house++;
        DFS(i+1, j);
        DFS(i-1, j);
        DFS(i, j+1);
        DFS(i, j-1);
    }
}

void Solution(){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(map[i][j]==1&&visit[i][j]==0){
                DFS(i, j);
                complex[cnt_complex]=cnt_house;
                cnt_house=0;
                cnt_complex++;
            }
        }
    }
}

void Sort(int* base, int n){
    int i, j;
    for (i = n; i>1; i--){
        for (j = 1; j<i; j++){
            if (base[j - 1]>base[j])
                SWAP(base[j - 1], base[j]);
        }
    }
}

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
            scanf("%1d", &map[i][j]);
    }

    Solution();
    Sort(complex, cnt_complex);

    printf("%d\n", cnt_complex);
    for(int i=0;i<cnt_complex;i++)
        printf("%d\n", complex[i]);

    return 0;
}