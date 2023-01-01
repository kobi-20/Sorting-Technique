#include<iostream>
using namespace std ;
void swap(int *a , int *b){ // Function to swapping
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}
int main(){
    int size ; // Size of Array
    int *array ;
    cout<<"Enter Size of Array : ";
    cin>>size ;
    array = new int(size); // Dynamically allocate memory
    cout<<"Enter "<<size<<" element : "<<endl;
    for(int i=0 ; i<size ;i++){ // Loop for insert value
        cout<<"Enter "<<i+1<<" element : ";
        cin>>array[i];
    }
    // Selection Sort Logic
    for(int i=0 ; i<size ; i++){ 
        for(int j = i+1 ; j<size ; j++){
            if(array[i]>array[j]){
                swap(&array[i], &array[j]);
            }
        }
    }
    //Displaying Sorted Array
     cout<<"Sorted Array is :"<<endl;
    for(int i=0 ; i<size ; i++){
        cout<<array[i]<<endl;
    }
    return 0;
}