#include<stdio.h>
#include<string.h>

int deque[20003]; // double end queue
int head=10001, rear=10002;

void push_front(){
    scanf("%d", &deque[head]);
    head--;
}

void push_back(){
    scanf("%d", &deque[rear]);
    rear++;
}

void pop_front(){
    if(deque[head+1]==0)
        printf("-1\n");
    else{
        head++;
        printf("%d\n", deque[head]);
        deque[head]=0;
    }
}

void pop_back(){
    if(deque[rear-1]==0)
        printf("-1\n");
    else{
        rear--;
        printf("%d\n", deque[rear]);
        deque[rear]=0;
    }
}

void size(){
    printf("%d\n", rear-head-1);
}

void empty(){
    if(rear-head==1)
        printf("1\n");
    else
        printf("0\n");
}

void front(){
    if(deque[head+1]==0)
        printf("-1\n");
    else
        printf("%d\n", deque[head+1]);
}

void back(){
    if(deque[rear-1]==0)
        printf("-1\n");
    else
        printf("%d\n", deque[rear-1]);
}

int main(){
    int t;
    char command[10];
    scanf("%d", &t);

    for(int j=0; j<t; j++){
        scanf("%s", command);
        if(!strcmp(command, "push_front"))
            push_front();
        else if(!strcmp(command, "push_back"))
            push_back();
        else if(!strcmp(command, "pop_front"))
            pop_front();
        else if(!strcmp(command, "pop_back"))
            pop_back();
        else if(!strcmp(command, "size"))
            size();
        else if(!strcmp(command, "empty"))
            empty();
        else if(!strcmp(command, "front"))
            front();
        else if(!strcmp(command, "back"))
            back();
        else
            break;
    }

    return 0;
}