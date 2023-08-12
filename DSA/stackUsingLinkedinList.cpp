#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
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

struct Node *createNode(struct Node *head, int data)
{ // pusing operation.
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
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

void Traversethroughstack(struct Node *head)
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

int peeking(struct Node *ptr, int index)
{
    for (int i = 0; i < index - 1; i++)
    {
        ptr = ptr->link;
    }
    return ptr->data;
}
int popping(struct Node * Stack){ // can't implement this function for second time.
    
    if (isEmpty(Stack))
    {
        cout << "Stack is underflowed" << endl;
    }
    else
    {
        struct Node *top = Stack;
        Stack = Stack->link;
        int data = top->data;
        free(top);
        return data;
    }
}

int main()
{
    // In this i am going to implement the stack using the linkedin list.
    // Operations like top(), peek() , insertion() -- push() and deletion() -- pop().

    struct Node *top = (struct Node *)malloc(sizeof(struct Node));
    top->data = 100;
    top->link = NULL;
    top = createNode(top, 11);
    top = createNode(top, 12);
    top = createNode(top, 101);

    cout << "Before the implementation of the popped operation" << endl;
    Traversethroughstack(top);

    // cout << "Implementing the popped operation in the stack" << endl;
    // top = popped(top);

    int value = popping(top);

    cout<<"The popped data is : "<<value<<endl;

    // cout<<"The popped data is : "<<data<<endl;

    // int data = peeking(top, 2);
    // cout << "The peeked data is " << data << endl;

    // if(isEmpty(top)){
    //     cout<<"Stack is empty() "<<endl;
    // }else{
    //     cout<<"Stack is not empty()"<<endl;
    // }
    // if(isFull(top)){
    //     cout<<"Stack is full()"<<endl;

    // }else{
    //     cout<<"stack is not full()"<<endl;
    // }

    Traversethroughstack(top);

    return 0;
}