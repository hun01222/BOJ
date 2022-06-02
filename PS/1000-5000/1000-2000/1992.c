#include<stdio.h>

int arr[65][65];

void DFS(int x, int y, int size){

    int b=0, w=0;

    for(int i=x; i<x+size; i++){
        for(int j=y; j<y+size; j++){
            if(arr[i][j]==0)
                b=1;
            if(arr[i][j]==1)
                w=1;
        }
    }

    if(w==0){
        printf("0");
        return;
    }
    if(b==0){
        printf("1");
        return;
    }

    printf("(");
    DFS(x, y ,size/2);
    DFS(x, y+size/2 ,size/2);
    DFS(x+size/2, y ,size/2);
    DFS(x+size/2, y+size/2 ,size/2);
    printf(")");
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            scanf("%1d", &arr[i][j]);
    }

    DFS(0, 0, n);

    return 0;
}