#include<stdio.h>
#include<stdlib.h>

int ability[21][21]={0, };
int result[11]={0, };
int check[21]={0, };
int n, sum=0, counter_sum=0, differance=1000000, temp_differance;

void DFS(int L, int pre){
    if(L==n/2){
        sum=0, counter_sum=0;

        for(int i=0; i<n/2; i++)
            check[result[i]]=1;
        for(int i=0; i<n/2; i++){
            for(int j=i+1; j<n/2; j++){
                sum+=ability[result[i]][result[j]];
                sum+=ability[result[j]][result[i]];
            }
        }

        int a=0;
        for(int i=1; i<=n/2; i++){
            if(check[i]==0){
                result[a]=i;
                a++;
            }
        }
        for(int i=0; i<n/2; i++){
            for(int j=i+1; j<n/2; j++){
                counter_sum+=ability[result[i]][result[j]];
                counter_sum+=ability[result[j]][result[i]];
            }
        }

        temp_differance=abs(sum-counter_sum);

        printf("%d %d\n", sum, counter_sum);

        if(differance>temp_differance)
            differance=temp_differance;

        for(int i=1; i<=n/2; i++)
            check[i]=0;
    }
    else{
        for(int i=1; i<=n; i++){
            if(pre<i){
                result[L]=i;
                DFS(L+1, i);
            }
        }
    }
}

int main(){
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            scanf("%d", &ability[i][j]);
    }

    DFS(0, 0);

    printf("%d\n", differance);

    return 0;
}