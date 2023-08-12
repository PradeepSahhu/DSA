#include<iostream>
#include<stdlib.h>
using namespace std;


struct Node{
    int data;
    struct Node *Next;
};

void Traverse(struct Node * Head){
    while(Head!=NULL){
        cout<<Head->data<<" ";
        Head = Head->Next;
    }
    cout<<endl;
}

struct Node * InsertAtBeginning(struct Node * Head, int data){
    struct Node * NewNode = (struct Node *)malloc(sizeof(struct Node));
    NewNode->data = data;
    NewNode->Next = Head;
    return NewNode;
}

struct Node * InsertInBetween(struct Node * Head, int data, int index){ // It will not work for index = 0;
    struct Node * NewNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = Head;
    int i = 0;
    while(i!=index-1){
        p = p->Next;
        i++;
    }
    // for(int i = 0;i!=index-1;i++){ // this is not working for i = 0;
    //     p = p->Next;
    // }
    NewNode->data = data;
    NewNode->Next = p->Next;
    p->Next = NewNode;
    return Head;

}


struct Node * InsertAtEnd(struct Node * Head, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = Head;
    ptr->data = data;
    while(p->Next!= NULL){
        p = p->Next;

    }
    p->Next = ptr;
    ptr->Next = NULL;
    return Head;
}


struct Node * InsertAfterANode(struct Node * Head,struct Node * Node, int data){
    struct Node * NewNode = (struct Node *)malloc(sizeof(struct Node));
    NewNode->data = data;
    NewNode->Next = Node->Next;
    Node->Next = NewNode;
    return Head;

}

int main()
{
    struct Node* Head, *Second, *third, *fourth, *fifth;


    Head = (struct Node *)malloc(sizeof(struct Node));
    Second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *) malloc(sizeof(struct Node ));


    Head->data = 32;
    Head->Next = Second;

    Second->data = 11;
    Second->Next = third;

    third->data = 88;
    third->Next = fourth;

    fourth->data = 100;
    fourth->Next = fifth;

    fifth->data = 199;
    fifth->Next = NULL;


    Traverse(Head);

    int data, index;
    cout<<"Enter the value to insert in the beginning "<<endl;
    cin>>data;
    // Head = InsertAtBeginning(Head, data); // Time complexity O(1)

  

    // cout<<"Enter the value to insert in the End "<<endl;
    // cin>>data;

    // Head = InsertAtEnd(Head, data);
    // cout<<"Enter the value to insert in Between "<<endl;
    // cin>>data;
    // cin>>index;

    // Head = InsertInBetween(Head, data, index);



    InsertAfterANode(Head,Second, data);







    Traverse(Head); // Time complexity : O(n)
   

  
   return 0;
}