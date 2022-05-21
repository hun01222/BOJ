#include<stdio.h>

int main(){
    int arr[10];
    int remainder[10];
    int cnt=0;

    for(int i=0; i<10; i++)
        remainder[i]=42;

    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
        arr[i]=arr[i]%42;
        for(int j=0; j<=i; j++){
            if(arr[i]==remainder[j])
                break;
            if(remainder[j]==42){
                remainder[j]=arr[i];
                cnt++;
                break;
            }
        }
    }

    printf("%d", cnt);

    return 0;
}