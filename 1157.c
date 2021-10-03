#include<stdio.h>
#include<string.h>

int main(){
    char arr[1000000]={0, };
    int Alphabet[26]={0, };
    int j, len, max=0, cnt=0;
    scanf("%s", arr);
    len=strlen(arr);
    for(int i=0; i<len; i++){
        if(arr[i]>='a')
            Alphabet[arr[i]-'a']++;
        else
            Alphabet[arr[i]-'A']++;
    }
    for(int i=0; i<26; i++){
        if(max<Alphabet[i]){
            max=Alphabet[i];
            j=i;
            cnt=0;
        }
        else if(max==Alphabet[i])
            cnt++;
    }
    if(cnt==0)
        printf("%c", j+'A');
    else
        printf("?");

    return 0;
}