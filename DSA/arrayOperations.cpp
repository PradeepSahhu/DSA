#include<iostream>
using namespace std;

int linearSearch(int arr[], int search){

    for(int i = 0;i<6;i++){
        if(search==arr[i]){
            return i;
        }
    }
    return -1;
}

void Inserting(int arr[], int data, int index){
    for(int i = 12;i>index;i--){
        arr[i] = arr[i-1];
    }
    arr[index] = data;
}
void outPut(int arr[]){
    for(int i = 0;i<20;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main(){
    // int size;

// cout<<"Enter the size of the array"<<endl;
//     cin>>size;
//     int arr[size];

//     // taking input into the array...
//     for(int i = 0;i<size;i++){
//         cout<<"Enter the "<<i+1<<endl;
//         cin>>arr[i];
//     }
//     // Displaying the array...
//     for(int i = 0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }


    // Linear searching into the array... Time complexity of the algo is O(n)
 
//     int arr[] = {1,2,3,4,5,6};
//     int search;
//     cout<<"Enter the number to search"<<endl;
//     cin>>search;

// cout<<"the value of search is "<<search<<endl;
// int result = linearSearch(arr,search);

// if(result== -1){
//     cout<<"No data found in the array"<<endl;
// }else{
//     cout<<"The index of the data is "<<result<<endl;
// }


// Inserting data into the array. - O(n)


   
    // int arr[20] = { 1, 2,3,4,5,6,7,8,9,10,11,12};
    // int data, index;
    // cout<<"Enter the data to insert " <<endl;
    // cin>>data;
    // cout<<"Enter to which index to insert"<<endl;
    // cin>>index;
    // outPut(arr);
    // Inserting(arr, data, index);
    // outPut(arr);

    //deletion operation.. - O(n)


// here the size of the array should be dynamic...


    // int arr[20] = { 1, 2,3,4,5,6,7,8,9,10,11,12};

    // int del; 
    // cout<<"Enter index delte from the array"<<endl;
    // cin>>del;

    // for(int i = del;i<12;i++ ){
    //     arr[i] = arr[i+1];
    // }

    // for(int i = 0;i<12;i++){
    //     cout<<arr[i]<<" ";

    // }

    int arr1[][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};

    int arr2[][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};


    int arr[3][3];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            arr[i][j] = 0;
            for(int k = 0;k<3;k++){
                arr[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }






   
    



    return 0;

}




   