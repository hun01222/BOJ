#include<stdio.h>

int main(){
    long long int n, cnt=1, arr[1000000]={0, };
    scanf("%lld", &n);

    if(n==1)
        printf("1");
    else{
        for(long long int i=0; i<1000000; i++){
            arr[i]=cnt;
            cnt+=6*i;
            if(n-arr[i]<=0){
                printf("%lld", i);
                break;
            }
        }
    }
    return 0;
}

//1, 7, 19, 37, 61
//6, 12, 18, 24