#include<stdio.h>
#include<math.h>

void hanoi(int number_of_disks_to_move, int from, int by, int to){
    if(number_of_disks_to_move==1)
        printf("%d %d\n", from ,to);
    else{
        hanoi(number_of_disks_to_move-1, from, to, by);
        printf("%d %d\n", from, to);
        hanoi(number_of_disks_to_move-1, by, from ,to);
    }
}

int main(){
    int n, k;
    scanf("%d", &n);

    k=pow(2,n)-1;
    printf("%d\n", k);

    hanoi(n, 1, 2, 3);

    return 0;
}