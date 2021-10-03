#include<stdio.h>
#define minf(a,b) a<b?a:b

int main(){
    int n, m, cntB=0, cntW=0, min=2500;
    char arr[50][50]={0, };
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++){
            scanf("%s", &arr[i]);
    }

    for(int i=0; i<n-7; i++){
        for(int j=0; j<m-7; j++){
            cntB=cntW=0;
            for(int k=i; k<i+8; k++){
                for(int l=j; l<j+8; l++){
                    if((k+l)%2==0){
                        if(arr[k][l]=='B')
                            cntW++;
                        else
                            cntB++;
                    }
                    else{
                        if(arr[k][l]=='B')
                            cntB++;
                        else
                            cntW++;
                    }
                }
            }
            
            min=minf(min,cntB);
            min=minf(min,cntW);
        }
    }

    printf("%d", min);
    return 0;
}