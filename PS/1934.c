#include<stdio.h>
#define swap(a, b){int t; t=a; a=b; b=t;}

int a, b;

int euclid_algo(a, b){
    return b?euclid_algo(b, a%b):a;
}

int main(){
    int t, temp;

    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &a, &b);
        if(a<b)
            swap(a, b);
        printf("%d\n", a*b/euclid_algo(a, b));
    }

    return 0;
}