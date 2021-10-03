#include<stdio.h>

int main(){
    int coordinate[4][2];
    for(int i=0; i<3; i++){
        scanf("%d %d", &coordinate[i][0], &coordinate[i][1]);
    }

    for(int i=0; i<2; i++){
        if(coordinate[0][i]==coordinate[1][i])
            coordinate[3][i]=coordinate[2][i];
        else if(coordinate[1][i]==coordinate[2][i])
            coordinate[3][i]=coordinate[0][i];
        else
            coordinate[3][i]=coordinate[1][i];
    }

    printf("%d %d", coordinate[3][0], coordinate[3][1]);

    return 0;
}