#include<iostream>
using namespace std;

int LinearSearch(int arr[], int data, int n){
    int loc = 0, index = 0;
    while(loc == 0 && index<=n){
        if(arr[index]==data){
            loc = index;
        }
        index++;
    }
    return loc;
}
int BinarySearch(int arr[], int data, int n){
    int LB = 0,Loc = -1 ;
    int UB = n-1;
    int mid = ( LB + UB)/2;
    while(LB<=UB && Loc == -1){
        if(arr[mid]==data){
            Loc = mid;
        }else if(data<arr[mid]){
            UB = mid - 1;
        }else{
            LB = mid + 1;
        }
        mid = ( LB + UB)/2;
    }
    // cout<<"The value of Loc is "<<Loc<<endl;
    return Loc;
}

int main()
{
    int n = 10;
  int arr[15] = {1,2,3,4,5,6,7,8,9,10};
  int data;
  cout<<"Enter the value of data"<<endl;
  cin>>data;
  int index = LinearSearch(arr, data, 10);

  cout<<"using Linear search"<<endl;

  if(index != 0){
    cout<<"Using Linear Search the value is found at index "<<index<<endl;
  }else{
    cout<<"There is no such element in the array"<<endl;
  }

  cout<<"Uisng Binary search"<<endl;

  int Search = BinarySearch(arr, data, 10);
  if(Search != -1){
    cout<<"The Binary Search value is found at index "<<Search<<endl;
  }else{
    cout<<"There is no such element in the array"<<endl;
  }
   return 0;
}