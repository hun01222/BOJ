#include<stdio.h>
#define max 51

int arr[max], temp[max];

void MargeSort(int L, int R){
    if(L>=R)
        return;

    int M=(L+R)/2;

    MargeSort(L, M);
    MargeSort(M+1, R);

    for(int i=L, l=L, r=M+1; l!=M+1||r!=R+1; i++){
        if((r!=R+1&&l<=M&&arr[l]<arr[r])||r==R+1)
            temp[i]=arr[l++];
        else
            temp[i]=arr[r++];
    }

    for(int i=L; i<=R; i++)
        arr[i]=temp[i];
}

int main(){
    int n;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    MargeSort(0, n-1);
    
    printf("%d", arr[0]*arr[n-1]);

    return 0;
}