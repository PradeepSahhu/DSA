#include<iostream>
using namespace std;

int main()
{
  int times, size, count = 0;
  cin>>times;
  cin>>size;
  int supply[size];
  int demand[size];

  cout<<"The value of size is "<<size<<endl;
  while(times--){
    for(int i = 0;i<size;i++){
        cin>>supply[i];
    }
    for(int i = 0;i<size;i++){
        cin>>demand[i];
    }
    for(int i = 0;i<size;i++){
      if(supply[i]==demand[i]){
        count++;
      }
    }

    
  }
  cout<<count;
   return 0;
}