#include<stdio.h>
#include<string.h>

int main(){
    char arr[15];
    int len, cnt=0;
    scanf("%s", arr);
    len=strlen(arr);

    for(int i=0; i<len; i++){
        if('A'<=arr[i]&&arr[i]<='C')
            cnt+=3;
        else if('D'<=arr[i]&&arr[i]<='F')
            cnt+=4;
        else if('G'<=arr[i]&&arr[i]<='I')
            cnt+=5;
        else if('J'<=arr[i]&&arr[i]<='L')
            cnt+=6;
        else if('M'<=arr[i]&&arr[i]<='O')
            cnt+=7;
        else if('P'<=arr[i]&&arr[i]<='S')
            cnt+=8;
        else if('T'<=arr[i]&&arr[i]<='V')
            cnt+=9;
        else
            cnt+=10;
    }

    printf("%d", cnt);

    return 0;
}