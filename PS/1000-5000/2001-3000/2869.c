#include<stdio.h>

/*
int main(){
    long int a, b, v, cnt=1;
    scanf("%ld %ld %ld", &a, &b, &v);

    while(1){
        v-=a;
        if(v<=0){
            printf("%ld", cnt);
            break;
        }
        v+=b;
        if(v<=0){
            printf("%ld", cnt);
            break;
        }
        cnt++;
    }

    return 0;
}
*/

int main(){
    long int a, b, v, day;

    scanf("%ld %ld %ld", &a, &b, &v);

    day=((v-b-1)/(a-b))+1;

    printf("%ld", day);
    return 0;
}

// 2-1+2-1
// 1   2   3   4
// 2 1 3 2 4 3 5