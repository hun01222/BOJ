#include<stdio.h>

int main(){
    long long int n, temp, t=0;
    scanf("%lld", &n);

    while(n>0){
        t++;
        temp=t;
        while(temp>0){
            if(temp%1000==666){
                n--;
                break;
            }
            temp/=10;
        }
    }
    
    printf("%lld", t);

    return 0;
}