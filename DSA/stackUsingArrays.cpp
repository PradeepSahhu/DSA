#include<iostream>
using namespace std;
#include<stdlib.h>

struct Stack{
    int size;
    int top;
    int * Stack;
};

int isEmpty(struct Stack * Stack){
    if(Stack->top == -1){
        return 1;
    }
    return 0;
}

int isFull(struct Stack * Stack){
    if(Stack->top==Stack->size-1){
        return 1;
    }
    return 0;
}



void push(struct Stack * ptr, int data){
    if(isFull(ptr)){
        cout<<"can't push inside the fulled stack and stack is overflowed"<<endl;
    }else{
        ptr->top++;
        ptr->Stack[ptr->top] = data;
    }
}

int Delete(struct Stack * ptr ){
    if(isEmpty(ptr)){
        cout<<"Stack is underflowed"<<endl;
        return -100;
    }else{
        int data = ptr->Stack[ptr->top];
        ptr->top--;
        return data;
    }
}

int peek(struct Stack * ptr, int i){
    if(ptr->top-i+1<0){
        cout<<"Invalid peek operaton"<<endl;
        return -1;

    }else{
        return ptr->Stack[ptr->top-i+1];
    }
}

int stackTop(struct Stack * ptr){
    return ptr->Stack[ptr->top];
}

int stackBottom(struct Stack * ptr){
    return ptr->Stack[0];
}

int main()
{
    struct Stack * s = (struct Stack *) malloc(sizeof(struct Stack));
    s->size = 20;
    s->top = -1;
    s->Stack = (int *)malloc(sizeof(s->size));


    cout<<"is empty "<<isEmpty(s)<<endl;
    cout<<"is Full "<<isFull(s)<<endl;


    push(s,12);
    push(s,9);
    push(s,9);
    push(s,99);
    push(s,95);
    push(s,93);
    push(s,12);
    push(s,11);
    push(s,85);
    
    cout<<"is empty "<<isEmpty(s)<<endl;
    cout<<"is Full "<<isFull(s)<<endl;

    // for(int j = 1;j<=s->top+1;j++){
    //     cout<<"The element of Stacks are "<<peek(s, j)<<endl;
    // }

    cout<<"Stack top "<<stackTop(s)<<endl;
    cout<<"Stack Bottom "<<stackBottom(s)<<endl;
    
  
   return 0;
}