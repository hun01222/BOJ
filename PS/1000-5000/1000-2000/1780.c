#include<stdio.h>

int arr[2190][2190];
int n;

int PLUS=0, MINUS=0, ZERO=0;

void DFS(int x, int y, int size){

    int p=0, m=0, z=0;

    for(int i=x; i<x+size; i++){
        for(int j=y; j<y+size; j++){
            if(arr[i][j]==1)
                m=1, z=1;
            if(arr[i][j]==0)
                p=1, m=1;
            if(arr[i][j]==-1)
                p=1, z=1;
        }
    }

    if(p==0){
        PLUS++;
        return;
    }
    if(m==0){
        MINUS++;
        return;
    }
    if(z==0){
        ZERO++;
        return;
    }

    DFS(x, y, size/3);
    DFS(x, y+size/3, size/3);
    DFS(x, y+2*size/3, size/3);
    DFS(x+size/3, y, size/3);
    DFS(x+size/3, y+size/3, size/3);
    DFS(x+size/3, y+2*size/3, size/3);
    DFS(x+2*size/3, y, size/3);
    DFS(x+2*size/3, y+size/3, size/3);
    DFS(x+2*size/3, y+2*size/3, size/3);
}

int main(){
    scanf("%d", &n);
    for(int i=0; i<n ;i++){
        for(int j=0; j<n; j++)
            scanf("%d", &arr[i][j]);
    }

    DFS(0, 0, n);

    printf("%d\n", MINUS);
    printf("%d\n", ZERO);
    printf("%d", PLUS);

    return 0;
}