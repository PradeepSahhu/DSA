#include<iostream>
using namespace std;

// Doubly linked list...

struct Node{
    int data;
    struct Node * next;
    struct Node * prev;
};


// struct Node * InsertAtFirst(struct Node * Head, int data){
//     struct Node * NewNode = (struct Node *)malloc(sizeof(struct Node));
//     struct Node * p = Head->next;
//     NewNode->data = data;
//     while(p->next != Head){
//         p = p->next;
//     }
//     p->next = NewNode;
//     NewNode->next = Head;
//     Head = NewNode;

//     return Head;

// }


void TraverseForward(struct Node * Head){
    struct Node *ptr = Head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}


void TraverseBackward(struct Node * Head){

    struct Node *ptr = Head;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    
   
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->prev;
    }
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
    Head->prev = NULL;

    first->data = 22;
    first->next = second;
    first->prev = Head;

    second->data = 33;
    second->next = third;
    second->prev = first;

    third->data = 44;
    third->next = fourth;
    third->prev = second;
    
    fourth->data = 55;
    fourth->next = NULL;
    fourth->prev = third;
    

    TraverseForward(Head);

    // InsertAtFirst(Head, 10001);
    TraverseBackward(Head);
  
   return 0;
}