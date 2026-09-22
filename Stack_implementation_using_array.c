#include <stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int x){
    if(top==size-1){
        printf("STACK OVERFLOW\n");
    }
    else{
        top = top+1;
        stack[top]=x;

    }
}
 int pop(){
    if (top ==-1){
        printf("UNDERFLOW\n");
        return -1;
    }
    else{
        int x=stack[top];
        printf("DELETED ELEMENT IS %d\n",x);
        top=top-1;
        return x;
    }

 }
 void main(){
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    pop();
    push(15);
    pop();
    pop();
    pop();
    pop();

 }