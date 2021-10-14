#include<stdio.h>

long long int DFS(long long int a, long long int b, long long int c){
    if(b==0)
        return 1;
    else if(b==1)
        return a;
    else if(b%2==0){
        long long int temp=DFS(a, b/2, c);
        return (temp*temp)%c;
    }
    else
        return a*DFS(a, b-1, c)%c;
}

int main(){
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    printf("%lld", DFS(a, b, c)%c);

    return 0;
}