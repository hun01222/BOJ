#include<stdio.h>
#include<math.h>

int main(){
    double n;
    scanf("%lf", &n);

    printf("%.6lf\n", n*n*M_PI);
    printf("%.6lf", n*n*2);

    return 0;
}