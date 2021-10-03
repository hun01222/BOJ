#include<stdio.h>
#define minf(a, b)(a<b?a:b)

int main(){
    long long int n, temp, cnt=0, min=1000000001, arr[100];
    scanf("%lld", &n);
    for(int i=0; i<n; i++){
        scanf("%lld", &arr[i]);
        min=minf(min, arr[i]);
        cnt++;
    }
    for(long long int i=2; i<min; i++){
        for(long long int j=0; j<cnt; j++){
            temp=arr[0]%i;
            if(temp!=arr[j]%i)
                break;
            if(j==cnt-1)
                printf("%lld ", i);
        }
    }

}