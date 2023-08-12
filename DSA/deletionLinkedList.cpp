#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};


void Traverse(struct Node * Head){
    while(Head!=NULL){
        cout<<Head->data<<" ";
        Head = Head->next;
    }
    cout<<endl;
}

struct Node * DeleteFirst(struct Node * Head){
    struct Node * Second = Head;
    Head = Head->next;
    free(Second);
    return Head;
}

struct Node * DeleteinBetween(struct Node * Head, int index){
    struct Node * ptr = Head;
    int i = 0;
    while(i!=index-1){
        ptr = ptr->next;
        i++;
    }
    // or we can also write...

    // struct Node * q = Head->next;
    // for(int i = 0;i<index-1;i++){
//         q = q->next;
//          ptr = ptr->next;
    // }
    // ptr->next = q->next;
    //free(q);
    //
    struct Node * Delete = ptr->next;
    ptr->next = Delete->next;
    free(Delete);

    return Head;

}

struct Node * DeleteInEnd(struct Node * Head){
    struct Node * ptr = Head;
    struct Node * Delete = Head->next;
    while(Delete->next != NULL){
        Delete = Delete->next;
        ptr = ptr->next;
    }
    ptr->next = NULL;
    free(Delete);

    return Head;

}

struct Node *DeleteWithGivenValue(struct Node * Head, int data){
    struct Node *ptr = Head;
    struct Node *Delete = Head->next;

    while(Delete->data != data && Delete->next != NULL){
        Delete = Delete->next;
        ptr = ptr->next;

    }
    if(Delete->data == data){
        ptr->next = Delete->next;
    free(Delete);
    
    }
   return Head;
    
}

void CountNode(struct Node * Head){
    int count = 0;
    struct Node * ptr = Head;
    while(ptr!=NULL){
        ptr = ptr->next;
        count++;
    }
    cout<<"The value of Count "<<count<<endl;
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
    fourth->next = NULL;

    Traverse(Head);

    // Head = DeleteFirst(Head);

    // Head = DeleteinBetween(Head, 2);
    // Head = DeleteInEnd(Head);
    // Head = DeleteWithGivenValue(Head, 44);
    CountNode(Head);

    Traverse(Head);




  
   return 0;
}