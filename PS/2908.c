#include<stdio.h>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);
    
    a=(a/100)+((a-(a/100)*100)-a%10)+(a%10)*100;
    b=(b/100)+((b-(b/100)*100)-b%10)+(b%10)*100;

    if(b>a)
        a=b;

    printf("%d", a);

    return 0;
}