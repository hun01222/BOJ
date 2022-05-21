#include<stdio.h>

int arr[1000000];

int main(){
    int n, temp=0, j=1;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        arr[i]=i+1;
    
    while(1){
        if(arr[temp+1]==0)
            break;
        temp++;

        if(arr[temp+1]==0)
            break;
        arr[n-1+j]=arr[temp];
        j++;
        temp++;
    }

    printf("%d\n", arr[temp]);

    return 0;
}