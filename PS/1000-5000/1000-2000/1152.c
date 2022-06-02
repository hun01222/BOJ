#include<stdio.h>
#include<string.h>

int main(){
    char arr[1000000]={0, };
    int cnt=1, letter=0;
    scanf("%[^\n]", arr); //scanset \n 제외하고 모두 입력
    int len=strlen(arr);
    for(int i=0; i<len;i++){
        if(arr[i-1]==' '&&arr[i]==' ')
            break;
        else if(arr[i]!=' ')
            letter++;
        else if(arr[i]==' '&&letter!=0)
            cnt++;
    }

    if(arr[len-1]==' ')
        cnt--;

    printf("%d", cnt);

    return 0;
}