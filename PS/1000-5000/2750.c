#include<stdio.h>
#define SWAP(a,b){int t;t=a;a=b;b=t;}

void sort(int *base,int n);

int main(){
    int n;
    int arr[1000]={0,};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(arr,n);
    for(int i=0;i<n;i++)
        printf("%d\n",arr[i]);
    return 0;
}

void sort(int *base,int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(base[j-1]>base[j]){
                SWAP(base[j-1],base[j]);
            }
            else
                break;
        }
    }
}