#include<stdio.h>
#include<string.h>
#define swap(a,b) {int t; t=a; a=b; b=t;}

int main(){
    int len;
    char arr[10];

    scanf("%s", arr);
    len=strlen(arr);

    for(int i=0; i<len; i++){
        for(int j=i; j<len; j++){
            if(arr[i]<arr[j])
                swap(arr[i], arr[j]);
        }
    }

    printf("%s", arr);

    return 0;
}