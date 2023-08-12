#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
};

int isEmpty(struct Node *Top)
{

    if (Top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *Top)
{
    struct Node *Full = (struct Node *)malloc(sizeof(struct Node));
    if (Full == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *PushStack(struct Node *top, int data)
{

    if (isFull(top))
    {
        cout << "top is overFlowed!!! you can't push into the stack..." << endl;
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = data;
        n->link = top;
        top = n;
        

    }
    return top;

   
}


int popStack(struct Node ** Node){

    
    if(isEmpty(*Node)){
        cout<<"Stack Overflow"<<endl;

    }else{
        struct Node *n = *Node;
        int data = (*Node)->data;
        *Node = (*Node)->link;
        free(n);


    return data;
    }
}
void DisplayStack(struct Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->link;
    }
    cout << endl;
}

int main()
{

    struct Node *Top = NULL;

    DisplayStack(Top);

    Top = PushStack(Top, 22);
    Top = PushStack(Top, 29);
    Top = PushStack(Top, 99);
    Top = PushStack(Top, 199);
    Top = PushStack(Top, 299);

    DisplayStack(Top);


    int value = popStack(&Top);
    cout<<"Popped element is : "<<value<<endl;

    DisplayStack(Top);




    return 0;
}