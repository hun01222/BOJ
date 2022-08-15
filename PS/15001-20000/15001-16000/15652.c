#include<stdio.h>

int result[9]={0, };
int N, M;

void DFS(int L, int pre){
    if(M==L){
        for(int i=0; i<M; i++)
            printf("%d ", result[i]);
        printf("\n");
    }
    else{
        for(int i=1; i<=N; i++){
            if(pre<=i){
                result[L]=i;
                DFS(L+1, i);
            }
        }
    }
}

int main(){
    scanf("%d %d", &N, &M);

    DFS(0, 0);

    return 0;
}