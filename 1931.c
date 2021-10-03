#include<stdio.h>

int arr[1001], temp[1001];

void MergeSort(int L, int R){
    if(L>=R)
        return;

    int M=(L+R)/2;
    
    MergeSort(L, M);
    MergeSort(M+1, R);

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
    int n, sum=0, temp_sum=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    MergeSort(0, n-1);

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            temp_sum+=arr[j];
        }
        sum+=temp_sum;
        temp_sum=0;
    }

    printf("%d", sum);

    return 0;
}