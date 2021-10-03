#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cnt=0;

struct NODE{
    int value;
    struct NODE *next;
}*tail,*head,*ptr;

void push(int n){
    ptr=(struct NODE*)malloc(sizeof(struct NODE));
    if(tail==NULL)
        tail=ptr;
    else
        head->next=ptr;
    ptr->value=n;
    ptr->next=NULL;
    head=ptr;
    cnt++;
}

void pop(){
    ptr=tail;
    if(cnt==0)
        printf("-1\n");
    else if(cnt==1){
        printf("%d\n",head->value);
        free(ptr);
        ptr=NULL;
        tail=NULL;
        head=NULL;
        cnt--;
    }
    else{
        printf("%d\n",head->value);
        while(ptr->next!=NULL){
            head=ptr;
            ptr=ptr->next;
        }
        free(ptr);
        head->next=NULL;
        cnt--;
    }
}

void size(){
        printf("%d\n",cnt);
}


void empty(){
    if(cnt==0)
        printf("1\n");
    else
        printf("0\n");
}

void top(){
    if(cnt==0)
        printf("-1\n");
    else
        printf("%d\n",head->value);
}


int main(){
    char order[10];
    int n;
    
    tail=NULL;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&order);
        if(!strcmp(order,"push")){
            int n;
            scanf("%d",&n);
            push(n);
        }
        else if(!strcmp(order,"top"))
            top();
        else if(!strcmp(order,"size"))
            size();
        else if(!strcmp(order,"empty"))
            empty();
        else if(!strcmp(order,"pop"))
            pop();
        else
            break;
    }
    return 0;
}
