#include<iostream>
using namespace std;

int *fun(int *p, int n){
    p = p+n;
    return p;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}, n, *ptr;
    n = 5;

    
    ptr = fun(arr, n);

    cout<<&arr<<"   :  "<<ptr<<" : "<<*ptr<<endl;

}