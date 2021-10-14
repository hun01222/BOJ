#include<stdio.h>

int main(){
    int arr[9], max=0, num;
    for(int i=0; i<9; i++)
        scanf("%d", &arr[i]);

    for(int i=0; i<9; i++){
        if(max<arr[i]){
            max=arr[i];
            num=i+1;
        }
    }

    printf("%d\n", max);
    printf("%d", num);

    return 0;
}