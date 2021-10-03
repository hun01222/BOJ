#include<stdio.h>

int main(){
    int m, n, sum=0, min=0;

    scanf("%d", &m);
    scanf("%d", &n);
    
    for(int i=m; i<=n; i++){
        for(int j=2; j<=i; j++){
            if(j==i||i==2){
                if(min==0)
                    min=i;
                sum+=i;
            }
            else if(i%j==0)
                break;

        }
    }
    
    if(sum==0)
        printf("-1");
    else{
        printf("%d\n", sum);
        printf("%d", min);
    }

    return 0;
}