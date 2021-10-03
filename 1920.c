#include<stdio.h>
#define max 100001

int arr[max], temp[max];

void MergeSort(int L, int R){
    if(L>=R)
        return;
    
    int M=(L+R)/2;

    MergeSort(L, M);
    MergeSort(M+1, R);

    for(int i=L, l=L, r=M+1; r!=R+1||l!=M+1; i++){
        if((r!=R+1&&l<=M&&arr[l]<arr[r])||r==R+1)
            temp[i]=arr[l++];
        else
            temp[i]=arr[r++];
    }

    for(int i=L; i<=R; i++)
        arr[i]=temp[i];
}

void search(int r, int k, int n){

    if(n==r+(k+1)/2){
        printf("1\n");
        return;
    }
    else if(n==k+r-1){
        printf("1\n");
        return;
    }
    else if(k==0){
        printf("0\n");
        return;
    }

    if(n<r+k/2)
        search(r, k/2, n);
    else
        search(r+k/2, k/2, n);
}

int main(){
    int n, m;
    int arrm[max];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    MergeSort(0, n-1);

    scanf("%d", &m);
    for(int i=0; i<m; i++)
        scanf("%d", &arrm[i]);

    for(int i=0; i<m; i++)
        search(arr[0], arr[n-1]-arr[0]+1, arrm[i]);

    return 0;
}