#include<stdio.h>
int main(){

    int stack[100001]={0, };
    int n, i=0, sum=0;

    scanf("%d", &n);
    while(n--){
        scanf("%d", &stack[i]);
        if(stack[i]==0){
            stack[i-1]=0;
            i--;
        }
        else
            i++;
    }

    for(int i=0; i<100001; i++)
        sum+=stack[i];

    printf("%d", sum);

    return 0;
}