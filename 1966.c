#include<stdio.h>

int main(){
    int n, m, t, temp, max;
    int queue[101][2];

    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &m);
        temp=0, max=0;

        for(int i=0; i<n; i++){
            scanf("%d", &queue[i]);
            if(max<queue[i])
                max=queue[i];
        }
        
    }

    return 0;
}