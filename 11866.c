#include<stdio.h>

int n, k, temp;
int queue[1001];

void pop(){
    temp+=(k-1);
    temp%=(n+1);
    printf("%d", queue[temp]);

    for(int i=temp; i<n; i++)
        queue[i]=queue[i+1];
}

int main(){
    scanf("%d %d", &n, &k);

    for(int i=0; i<n; i++)
        queue[i]=i+1;

    printf("<");

    while(n--){
        pop();
        if(n!=0)
            printf(", ");
    }

    printf(">");

    return 0;
}