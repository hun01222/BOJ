#include<stdio.h>
#define swap(a, b){int t; t=a; a=b; b=t;}

int dp[1001][1001];

int min(int a, int b){
    return a<b?a:b;
}

int pascal(int n, int k){
    for(int i=0; i<=n; i++){
        for(int j=0; j<=min(i, k); j++){
            if(j==0||j==i)
                dp[i][j]=1;
            else
                dp[i][j]=(dp[i-1][j]+dp[i-1][j-1]);
        }
    }
    return dp[n][k];
}

int main(){
    int n, k, t;

    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &k);
        if(n<k)
            swap(n, k);
        printf("%d\n", pascal(n, k));
    }
    return 0;
}