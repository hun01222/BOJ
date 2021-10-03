#include<stdio.h>
#include<string.h>

int main(){
    int t,n;
    char arr[20];

    scanf("%d", &t);

    while(t--){
        scanf("%d %s", &n, arr);
        for(int i=0; i<strlen(arr); i++){
            for(int j=0; j<n; j++){
                printf("%c", arr[i]);
            }
        }
        printf("\n");
    }

    return 0;
}