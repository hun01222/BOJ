#include<stdio.h>
#include<string.h>

int queue[2000001]={0, };

int i=0, front=0, rear=-1;

void push(){
    int x;
    rear++;
    scanf("%d", &x);
    queue[rear]=x;
}

void pop(){
    if(front>rear)
        printf("-1\n");
    else{
        printf("%d\n", queue[front]);
        front++;
    }
}

void size(){
    printf("%d\n", rear-front+1);
}

void empty(){
    if(front>rear)
        printf("1\n");
    else
        printf("0\n");
}

void front1(){
    if(front>rear)
        printf("-1\n");
    else
        printf("%d\n", queue[front]);
}

void back(){
    if(front>rear)
        printf("-1\n");
    else
        printf("%d\n", queue[rear]);
}

int main(){
    int n, j;
    char command[10];

    scanf("%d", &n);
    for(j=0; j<n; j++){
        scanf("%s", command);
        if(!strcmp(command,"push"))
            push();
        else if(!strcmp(command,"pop"))
            pop();
        else if(!strcmp(command,"size"))
            size();
        else if(!strcmp(command,"empty"))
            empty();
        else if(!strcmp(command,"front"))
            front1();
        else if(!strcmp(command,"back"))
            back();
        else
            break;
    }

    return 0;
}