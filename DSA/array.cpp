#include<iostream>
using namespace std;


int a = 5, b = 10;
void change1(int *p);
void change2(int **pp);


int main()
{
    int x = 20, *ptr = &x;
    cout<<*ptr<<" ";
    change1(ptr);
    cout<<*ptr<<" ";
    change2(&ptr);
    cout<<*ptr<<" ";


  
}

void change1(int *p){
    p = &a;
}
void change2(int **pp){
    *pp = &b;
}