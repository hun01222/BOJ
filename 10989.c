#include<stdio.h>

int main(){
    int n, a, cnt[10001]={0, };

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        cnt[a]++;
    }

    for(int i=0; i<=10000; i++){
        while(cnt[i]--)
            printf("%d\n", i);
    }

    return 0;
}