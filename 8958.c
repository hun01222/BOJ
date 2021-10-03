#include<stdio.h>
#include<string.h>

int main(){
    int n, cnt=0, sum;
    char arr[80];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        sum=0, cnt=0;
        scanf("%s", arr);
        for(int j=0; j<strlen(arr); j++){
            if(arr[j]=='O')
                cnt++;
            else
                cnt=0;
            sum+=cnt;
        }
        printf("%d\n", sum);
    }

    return 0;
}