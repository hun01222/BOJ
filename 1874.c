#include<stdio.h>
#define max 100001

int arr[max]={0, };
int stack[max]={0, };

int i, a, n, min=max;

void push(){
    for(int j=0; j<n; j++){
        min=max;
        if(min>arr[j]&&arr[j]!=0){
            min=arr[j];
            arr[j]=0;
        }
    }
    printf("+\n");
    stack[i]=min;
    a++;
}

void pop(){
    printf("-\n");
    stack[i]=0;
    a--;
}

int main(){
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    i=1, a=0;
    while(1){
        if(arr[n]==1&&i==n)
            break;
        else if(i==0){
            printf("NO");
            break;
        }

        if(i<arr[a])
            push();
        else if(i==arr[a])
            pop();
        i++;
    }

    printf("%d", min);
    return 0;
}