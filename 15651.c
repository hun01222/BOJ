#include<stdio.h>

int result[8]={0, };
int N, M;

void DFS(int L){
    if(M==L){
        for(int i=0; i<M; i++)
            printf("%d ", result[i]);
        printf("\n");
    }
    else{
        for(int i=1; i<=N; i++){
            result[L]=i;
            DFS(L+1);
        }
    }
}

int main(){
    scanf("%d %d", &N, &M);

    DFS(0);

    return 0;
}