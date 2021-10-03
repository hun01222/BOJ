#include<stdio.h>

int factorial(int n){
    int multi=1;
    while(1){
        if(n<=1)
            break;
        else
            multi*=n;
        n--;
    }
    return multi;
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    printf("%d", factorial(n)/(factorial(k)*factorial(n-k)));

    return 0;
}