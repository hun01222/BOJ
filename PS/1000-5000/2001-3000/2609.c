#include<stdio.h>

int main(){
    int n, m, min, t, i=0, multi=1;
    scanf("%d %d", &n, &m);

    min=n<m?n:m;

    t=min;

    while(t--){
        for(i=2; i<=min; i++){
            if(n%i==0&&m%i==0){
                n/=i;
                m/=i;
                multi*=i;
                break;
            }
        }
    }

    printf("%d\n", multi);
    printf("%d", n*m*multi);

    return 0;
}