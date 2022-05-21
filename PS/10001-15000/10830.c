#include<stdio.h>

long long int n, arr[5][5], ans[5][5], temp_DFS[5][5], temp_mulmat[5][5];

void mulmat(long long int arr1[5][5], long long int arr2[5][5]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            temp_mulmat[i][j]=0;
            for(int k=0; k<n; k++){
                temp_mulmat[i][j]+=arr1[i][k]*arr2[k][j];
            }
            temp_mulmat[i][j]%=1000;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            arr1[i][j]=temp_mulmat[i][j];
    }
}

int main(){
    long long int b;
    scanf("%lld %lld", &n, &b);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%lld", &arr[i][j]);
        }
        ans[i][i]=1;
    }

    while(b>0){
        if(b%2==1){
            mulmat(ans, arr);
        }
        mulmat(arr, arr);
        b/=2;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%lld ", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}