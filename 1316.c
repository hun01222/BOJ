#include<stdio.h>
#include<string.h>

int main(){
    int n, len, cnt=0, alphabet[26];
    char arr[100];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0;j<26;j++)
            alphabet[j]=0;
        cnt++;
        scanf("%s", arr);
        len=strlen(arr);
        for(int j=0; j<len; j++){
            for(int k=0; k<26; k++){
                if(arr[j]-'a'==k)
                    alphabet[k]++;
            }
            if((len>1)&&(alphabet[arr[j]-'a']>1)&&(arr[j-1]!=arr[j])){
                cnt--;
                break;
            }
        }
    }

    printf("%d", cnt);

    return 0;
}