#include<stdio.h>

int main(){
    int a;
    int b[3];

    scanf("%d", &a);
    for(int i=0; i<3; i++)
        scanf("%1d", &b[i]);

    for(int i=2; i>=0; i--)
        printf("%d\n", a*b[i]);
    printf("%d", a*(b[0]*100+b[1]*10+b[2]));

    return 0;
}