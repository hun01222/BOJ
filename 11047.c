#include<stdio.h>
int main(){
    int n,m=0,x,a[10]={0,};
    scanf("%d %d",&n,&x);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(n>0){
        n--;
        while(x>=a[n]){
            if(a[n]!=0){
                x-=a[n];
                m++;
            }
        }
    }
    printf("%d",m);
    return 0;
}