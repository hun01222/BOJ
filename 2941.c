#include<stdio.h>
#include<string.h>

int main(){
    char arr[100];
    int cnt=0, len;
    scanf("%s", arr);
    len=strlen(arr);
    cnt=len;

    for(int i=0; i<len; i++){
        if((arr[i-2]=='d')&&(arr[i-1]=='z')&&(arr[i]=='='))
            cnt-=2;
        else if((arr[i-1]=='c'&&arr[i]=='=')||(arr[i-1]=='s'&&arr[i]=='=')||(arr[i-1]=='z'&&arr[i]=='='))
            cnt--;
        else if((arr[i-1]=='c'&&arr[i]=='-')||(arr[i-1]=='d'&&arr[i]=='-'))
            cnt--;
        else if((arr[i-1]=='l'&&arr[i]=='j')||(arr[i-1]=='n'&&arr[i]=='j'))
            cnt--;

    }

    printf("%d", cnt);

    return 0;
}