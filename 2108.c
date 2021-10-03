#include<stdio.h>

int main(){
    int n, cnt[8001]={0,}, arr[500001]={0,};
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);


// sum
    double sum=0;

    for(int i=0; i<n; i++)
        sum+=arr[i];
    printf("%.lf\n", sum/n);


// midian

    int temp, k=0;

    for(int i=0; i<n; i++){
        cnt[arr[i]+4000]++;
    }

    for(int i=0; i<8001; i++){
        temp=cnt[i];
        while(cnt[i]--){
            arr[k]=(i-4000);
            k++;
        }
        cnt[i]=temp;
    }
    
    printf("%d\n", arr[(n-1)/2]);

// modes
    int flag=0, modes=0, count=0;

    for(int i=0; i<8001; i++){
        if(count<cnt[i]&&cnt[i]!=0){
            count=cnt[i];
            modes=i-4000;
            flag=0;
        }
        else if(count==cnt[i]&&cnt[i]!=0&&flag!=1){
            modes=i-4000;
            flag=1;
        }
    }
    
    printf("%d\n", modes);


// range
    int min, max;

    for(int i=0; i<8001; i++){
        if(cnt[i]!=0){
            min=i-4000;
            break;
        }
    }

    for(int i=8000; i>=0; i--){
        if(cnt[i]!=0){
            max=i-4000;
            break;
        }
    }

    printf("%d", max-min);

    return 0;
}
