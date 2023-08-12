#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size, int search){
    int  start, mid, end;
     start = 0;
     end = size;
     
    mid = (start + end)/2;
    while(start<=end){
        // std::cout<<"loop is running"<<endl;
        if(arr[mid] == search){
            return mid;
        }
        else if(arr[mid] > search){
            end = mid-1;
        }else if(arr[mid]<search){
            start = mid+1;
        }
        mid = (start + end)/2;

    }
    return -1;
}

int main(){
    // binary search ---> O(log n)
    int search, result, size;
     int arr[] = {0,1,2,3,4,5,6,7,8,9,10};

    
    std::cout<<"Enter the element to search"<<endl;
    cin>>search;

    size = sizeof(arr)/sizeof(int);

    

    result = BinarySearch(arr, size,search);

    
    std::cout<<"The searched  "<<((result==-1)?"Element not found":"Found element")<<" at index "<<result<<" value is "<<arr[result]<<endl;
    // std::cout<<"The array size is "<<sizeof(arr)/sizeof(arr[0])<<endl;
    // std::cout<<"The array size is "<<sizeof(arr);

    return 0;
}
