#include<stdio.h>

int main(){
    int t, k, n;
    int arr[15][15]={0, };
    scanf("%d", &t);

    while(t--){
        scanf("%d", &k);
        scanf("%d", &n);
        for(int i=1; i<15; i++){
            arr[0][i]=i;
            arr[i][1]=1;
        }
        for(int i=1; i<15; i++){
            for(int j=2; j<15; j++){
                arr[i][j]=arr[i-1][j]+arr[i][j-1];
            }
        }
        printf("%d\n", arr[k][n]);
    }
    return 0;
}