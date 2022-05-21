#include<stdio.h>

int main(){
    int n, sum=0;
    scanf("%d", &n);
    sum=n;

    while(n--)
        sum+=n;

    printf("%d", sum);

    return 0;
}