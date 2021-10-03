#include<stdio.h>
#include<string.h>

void reverse(char *arr){
    int len=strlen(arr);
    char temp;
    for(int i=0; i<len/2; i++){
        temp=arr[i];
        arr[i]=arr[len-i-1];
        arr[len-i-1]=temp;
    }
}

int main(){
    char a[10002]={0, }, b[10002]={0, }, c[10003]={0, };
    scanf("%s %s", a, b);
    reverse(a);
    reverse(b);
    int len = strlen(a)>strlen(b)?strlen(a):strlen(b);
    int carry=0;

    for(int i=0; i<len; i++){
        int sum=a[i]-'0'+b[i]-'0'+carry;
        while(sum<0)
            sum+='0';
        if(sum>9)
            carry=1;
        else
            carry=0;
        c[i]=sum%10+'0';
    }
    if(carry==1)
        c[len]='1';

    reverse(c);
    printf("%s", c);

    return 0;
}