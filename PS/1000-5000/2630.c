#include<stdio.h>

int arr[129][129];
int n;

int Bule=0, White=0;

void DFS(int x, int y, int size){

    int B=0, W=0;

    for(int i=x; i<x+size; i++){
        for(int j=y; j<y+size; j++){
            if(arr[i][j]==1)
                B=1;
            if(arr[i][j]==0)
                W=1;
        }
    }

    if(W==0){
        Bule++;
        return;
    }
    if(B==0){
        White++;
        return;
    }

    DFS(x, y, size/2);
    DFS(x+size/2, y, size/2);
    DFS(x, y+size/2, size/2);
    DFS(x+size/2, y+size/2, size/2);
}

int main(){
    scanf("%d", &n);
    for(int i=0; i<n ;i++){
        for(int j=0; j<n; j++)
            scanf("%d", &arr[i][j]);
    }

    DFS(0, 0, n);

    printf("%d\n", White);
    printf("%d", Bule);

    return 0;
}