#include<stdio.h>

char str[101];
int i, top, n, check[101];

void push(){
    top++;
    check[top]=str[i];
}

int pop(){
    if((str[i]==')'&&check[top]=='(')||(str[i]==']'&&check[top]=='[')){
        top--;
        return 1;
    }
    else
        return 0;
}

int main(){
    while(1){
        gets(str); //공백 포함하지만 \n 포함하지 않음, fget는 \n 까지 포함함.
        top=-1;
        n=1;
        if(str[0]=='.')
            break;
        for(i=0; str[i]!='.'; i++){
            if(!n)
                continue;
            if(str[i]=='(')
                push();
            if(str[i]=='[')
                push();
            if(str[i]==')')
                n=pop();
            if(str[i]==']')
                n=pop();
        }
        if(top==-1&&n)
            puts("yes");
        else
            puts("no");
    }
    return 0;
}