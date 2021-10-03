#include<stdio.h>
#define max 1000001

int arr[max], temp[max];

void MergeSort(int L, int R){
    if(L>=R)
        return;

    int M=(L+R)/2;

    //Divide
    MergeSort(L, M);
    MergeSort(M+1, R);

    //Conquer
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

    MergeSort(0, n-1);

    for(int i=0; i<n; i++)
        printf("%d\n", arr[i]);

    return 0;
}