#include<stdio.h>
#define swap(a, b){int t; t=a; a=b; b=t;}

int a, b;

int GCD(a, b){
    if(a<b)
        swap(a, b);
    return b?GCD(b, a%b):a;
}

int main(){
    int t, n, m;
    scanf("%d", &t);

    scanf("%d", &n);

    t--;
    while(t--){
        scanf("%d", &m);
        printf("%d/%d\n", n/GCD(n, m), m/GCD(n, m));
    }
    return 0;
}