#include<stdio.h>
#include<string.h>

int main(){
    char arr[100];
    char alphabet[26];
    for (int i=0; i<26; i++)
        alphabet[i]=-1;

    scanf("%s", arr);
    for(int i=0; i<26; i++){
        for(int j=0; j<strlen(arr); j++){
            if((arr[j]-('a')==i)&&alphabet[i]==-1)
                alphabet[i]=j;
        }
    }

    for(int i=0; i<26; i++)
        printf("%d ", alphabet[i]);

    return 0;
}