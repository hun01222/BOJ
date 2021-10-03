#include<stdio.h>
#define index 6561

char arr[index][index];

void rec(int n, char *arr){
    if(n==0)
        return;
    else{
        for(int i=n*3-1; i<n*6-1; i++){
            for(int j=n*3-1; j<n*6-1; j++){
                arr[i][j]=' ';
            }
        }

        rec(n--, arr);
    }
}

int main(){
    int n, N;

    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            arr[i][j]='*';
    }

    rec(sqrt(N), arr);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            printf("%c", arr[i][j]);
        printf("\n");
    }



    return 0;
}