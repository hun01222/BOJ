#include<stdio.h>

int main(){
    int n,m,a,b,cnt=0;
    scanf("%d", &n);
    m=n;
    while(1){
        if(n<10){
            a=0;
            b=n;
        }
        else{
            a=n/10;
            b=n%10;
        }
        n=(a+b)%10+b*10;
        cnt++;
        if(n==m)
            break;
    }
    printf("%d",cnt);
    return 0;
}