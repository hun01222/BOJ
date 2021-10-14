#include<stdio.h>

int main(){
    int n, m;
    while(1){
        scanf("%d %d", &n, &m);

        if(n==0&&m==0)
            break;
        else if(m%n==0)
            printf("factor");
        else if(n%m==0)
            printf("multiple");
        else
            printf("neither");
        printf("\n");
    }

    return 0;
}