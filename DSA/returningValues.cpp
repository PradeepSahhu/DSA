#include<iostream>
using namespace std;

void ReturningMorevalue(int a, int b, int* pa, int *pd, int *multi, float *div){
    *pa = a +b;
    *pd = a - b;
    *multi = a*b;
    *div = (float)a/b;
}

int main(){
    int firstVariable, secondVariable, add, diff, multi;
    float div;
    cout<<"Enter the first variable"<<endl;
    cin>>firstVariable;
    cout<<"Enter the second variable"<<endl;
    cin>>secondVariable;

    ReturningMorevalue(firstVariable, secondVariable, &add, &diff,&multi, &div);

    cout<<"The value of sum is : "<<add <<" sub : "<<diff<<" multi : "<<multi<< " div : "<<div<<endl;

    return 0;
}