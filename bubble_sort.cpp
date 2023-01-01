#include<iostream>
using namespace std ;
void swap(int *a , int *b){ // Function To Swap..
    int temp = *a;
    *a = *b ;
    *b = temp;
}

void bubble_sort(int array[] , int size){ // Bubble sort Logic
    for(int i=0 ; i<size ; i++){
        for(int j=0 ; j<size - i - 1; j++){
            if(array[j]>array[j+1]){
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

void print_sorted(int array[], int size){ // Function to print sorted Array
    cout<<"Sorted array : "<<endl;
    for(int i=0; i<size; i++){
        cout<<array[i]<<endl;
    }
}
void insert(int array[] , int size){ // Function To insert unsorted data
    cout<<"Enter "<<size<<" element : "<<endl;
    for(int i=0 ; i<size ;i++){ // Loop for insert value
        cout<<"Enter "<<i+1<<" element : ";
        cin>>array[i];
    }
}
int main(){
    int size ; // Size of Array
    int *array ;
    cout<<"Enter Size of Array : ";
    cin>>size ;
    array = new int(size); // Dynamically allocate memory
    insert(array, size);
    bubble_sort(array, size);
    print_sorted(array, size);
    return 0 ;
}