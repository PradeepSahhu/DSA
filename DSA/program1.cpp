#include <iostream>
using namespace std;


// Function to traverse through the array.
void Traverse(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] << " ";
    }
    cout<<endl; // to print the new line.
}

// Function to insert an element in the given index of the array.
void InsertAtIndex(int arr[], int *n, int index, int data)
{
    for(int i = *n-1;i>=index;i--){
        arr[i+1] = arr[i];
    }
    arr[index] = data;

    // Increasing the value of n; 
    *n = *n + 1; // now the value of ture n is get updated. to n = n + 1;


}

// Function to delete item from the desired index from the array.
int DeleteAtIndex(int arr[], int *n, int index)
{
    int data = arr[index];
    for(int i = index;i<=*n;i++){
        arr[i] = arr[i+1];
    }
    *n = *n -1; // now the true value of n is reduced to 10.
    return data; // returnintg the deleted item from the array.

}

int main()
{

    // n = no. of elements in the array.
    int n = 10; // Initially the value of the variable is 10

    // Size of the array is 15.
    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Traverse(arr, n);
    cout<<"Inserting element into the Array"<<endl;
    InsertAtIndex(arr, &n, 1, 10001);
    Traverse(arr, n);

    //Storing the Deleted Data into the 'data' variable.
    // int data = DeleteAtIndex(arr, &n, 1);

    // Printing the deleted element from the array.
    // cout<<"The deleted value is : "<<data<<endl;
    // Traverse(arr, n);



    return 0;
}