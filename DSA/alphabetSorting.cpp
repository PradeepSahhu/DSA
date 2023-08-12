#include<iostream>
using namespace std;

int main()
{
  char arr[15] = {'a', 'd', 'c','e','f', 'z', 'g', 'u', 's', 'p', 'n'};
  for(int i = 0;i<12;i++){
    for(int j = 0;j<12;j++){
        if(arr[j]>arr[i]){
            char c = arr[i];
            arr[i] = arr[j];
            arr[j] = c;
        }
        
    }
    
  }
  for(int i = 0;i<12;i++){
    cout<<arr[i]<<" ";
  }
   return 0;
}