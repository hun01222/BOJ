#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int t, x1, y1, r1, x2, y2, r2;
    float dis;

    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        dis=sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));

        if((r1==r2)&&(dis==0))
            printf("-1\n");
        else if(dis<(r1+r2)&&abs(r1-r2)<dis)
            printf("2\n");
        else if(dis==(r1+r2)||dis==abs(r1-r2))
            printf("1\n");
        else
            printf("0\n");
    }

    return 0;
}