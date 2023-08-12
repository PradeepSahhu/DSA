#include<iostream>
using namespace std;

class Array{
    int total_size;
    int used_size;
    int *ptr;

    public:
    Array(int tSize, int uSize){
        this->total_size = tSize;
        this->used_size = uSize;
        this->ptr = new int[100];
    }
    void setValue(){
        for(int i = 0;i<used_size;i++){
            ptr[i] = rand() % 10;
            // ptr + i = rand(); // check it later...
        }
    }

    void getValue(){
        for(int i = 0;i<used_size;i++){
           cout<<ptr[i]<<" ";
        }
        cout<<endl;
    }
    void insert(int value){
        used_size++;
        ptr[used_size-1] = value;
        cout<<"the number of elements are : "<<used_size<<endl;
    }
    void insertAt(int index, int value){
        used_size++;
        for(int i = used_size;i>index;i--){
            ptr[i-1] = ptr[i-2];
        }
        cout<<"the number of elements are : "<<used_size<<endl;
        ptr[index] = value;
    }

    void sorting(){
         
    }
};


int main(){
    Array obj(100,20);
    obj.setValue();
    obj.getValue();
    obj.insertAt(0, 99);
    obj.getValue();

}