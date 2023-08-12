# DSA

```c++

#include<iostream>
using namespace std;

// Paranthesis matching problem using stack - (Application of Stack.)

struct Node {
   char data;
   struct Node * link;
};
int isFull()
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct Node *ptr)
{
    if (ptr == NULL)
    {
        return 1;
    }
    return 0;
}

struct Node *pushing(struct Node *head, int data)
{ // pusing operation.
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (isFull())
    {
        cout << "Stack is overflowed" << endl;
    }
    else
    {
        ptr->data = data;
        ptr->link = head;
        head = ptr;
    }

    return head;
}

void Traverse(struct Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->link;
    }
    cout << endl;
}

struct Node *popped(struct Node *Stack)
{ // works perfectly fine however it is not returning any value.
    if (isEmpty(Stack))
    {
        cout << "Stack is underflowed" << endl;
    }
    else
    {
        struct Node *top = Stack;
        Stack = Stack->link;
        free(top);
    }

    return Stack;
}

int peeking(struct Node *top, int index)
{
    struct Node * ptr = top;
    for (int i = 0; i < index - 1 && top!=NULL; i++)
    {
        ptr = ptr->link;
    }
    if(ptr!=NULL){
        return ptr->data;
    }else{
        return -1;
    }
    
}

int main()
{



   char arr[] = "(2+5-(1-3)*4+8-(7+8))";
   bool isBalanced = true;
   struct Node * top = NULL;
   int size = sizeof(arr)/sizeof(arr[0]);
   for(int i = 0;i<size;i++){
      if(arr[i] == '('){
         top = pushing(top, arr[i]);
      }
      else if(arr[i] == ')'){
         if(!isEmpty(top)){
             top = popped(top);
             
            
         }
         else{
          
            isBalanced = false;
             break;
         }
        
      }
       
   }
   if(isBalanced && isEmpty(top)){
      cout<<"Balanced Expression"<<endl;
   }
   else{
      cout<<"Unbalanced Expression"<<endl;
   }

  

  
   return 0;
}
```
