#include<stdio.h>

int main(){
    int n, i=1, temp, sum=0, flag=0;

    scanf("%d", &n);
    temp=n;
    for(; i<n; i++){
        sum=temp=i;
        while(temp>0){
            sum+=temp%10;
            temp/=10;
        }
        if(sum==n){
            flag=1;
            break;
        }
    }

    flag==1?printf("%d", i):printf("0");

    return 0;
}