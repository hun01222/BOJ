#include<stdio.h>

int main(){

    int n,sum=0;
    char a[50]={0,};
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int cnt=0;
        sum=0;
        scanf("%s",&a);
        while(a[cnt]!=0)
            cnt++;
        for(int j=0;j<cnt;j++){
            if(a[j]=='(')
                a[j]=1;
            else
                a[j]=-1;
            sum+=a[j];
            if(sum==-1)
                break;
        }
        if(sum==0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}