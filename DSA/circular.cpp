#include<iostream>
using namespace std;

// Circular Linked List.

struct Node{
    int data;
    struct Node * next;
};


struct Node * InsertAtFirst(struct Node * Head, int data){
    struct Node * NewNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = Head->next;
    NewNode->data = data;
    while(p->next != Head){
        p = p->next;
    }
    p->next = NewNode;
    NewNode->next = Head;
    Head = NewNode;

    return Head;

}


void Traverse(struct Node * Head){
    struct Node *ptr = Head;
    do{
        cout<<ptr->data<<" ";
        ptr = ptr->next;


    }while(ptr!=Head);
    cout<<endl;
}

int main()
{


    struct Node * Head, *first, *second, *third, *fourth;
    Head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));


    Head->data = 11;
    Head->next = first;

    first->data = 22;
    first->next = second;

    second->data = 33;
    second->next = third;

    third->data = 44;
    third->next = fourth;
    
    fourth->data = 55;
    fourth->next = Head;

    Traverse(Head);

    Head = InsertAtFirst(Head, 10001);
    Traverse(Head);
  
   return 0;
}