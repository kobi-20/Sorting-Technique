#include<iostream>
using namespace std;
void swap(int *a , int *b){ // Function To Swap..
    int temp = *a;
    *a = *b ;
    *b = temp;
}
void insert(int array[] , int size){ // Function To insert unsorted data
    cout<<"Enter "<<size<<" element : "<<endl;
    for(int i=0 ; i<size ;i++){ // Loop for insert value
        cout<<"Enter "<<i+1<<" element : ";
        cin>>array[i];
    }
}
void print_sorted(int array[], int size){ // Function to print sorted Array
    cout<<"Sorted array : "<<endl;
    for(int i=0; i<size; i++){
        cout<<array[i]<<endl;
    }
}
void insertionSort(int array[] , int size){ // Insertion Sort Logic
    int i, j, key ;
    for(i=1 ; i<size; i++){
        key = array[i];
        j= i-1;
        while(j>=0 && array[j]> key){
            array[j+1] = array[j];
            j--;
        }
        array[j+1]=key;
    }
}
int main(){
    int size ; // Size of Array
    int *array ;
    cout<<"Enter Size of Array : ";
    cin>>size ;
    array = new int(size); // Dynamically allocate memory
    insert(array, size);
    insertionSort(array, size);
    print_sorted(array, size);
    return 0 ;
    return 0;
}
/*     9 8 5 2
1st->  8 9 5 2   
2nd->  8 5 9 2
       5 8 9 2
3rd->  5 8 2 9
       5 2 8 9
       2 5 8 9      
*/