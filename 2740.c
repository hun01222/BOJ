#include<stdio.h>

int main(){
    int n, m, k, temp, arr1[101][101], arr2[101][101];
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            scanf("%d", &arr1[i][j]);
    }

    scanf("%d %d", &m, &k);
    for(int i=0; i<m; i++){
        for(int j=0; j<k; j++)
            scanf("%d", &arr2[i][j]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            temp=0;
            for(int k=0; k<m; k++){
                temp+=(arr1[i][k]*arr2[k][j]);
            }
            printf("%d ", temp);
        }
        printf("\n");
    }

    return 0;
}