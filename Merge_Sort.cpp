#include <iostream>
using namespace std;
void print(int array[], int size)
{
    cout << "Sorted Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
void merge(int array[], int lb, int mid, int ub)
{
    int i, j, k; // indexes
    int n1 = mid - lb + 1; // Left Sub-Array Length
    int n2 = ub - mid;     // Right Sub-Array Length
    int L[n1], R[n2];
    // Left Sub Array
    for (i = 0; i < n1; i++)
    {
        L[i] = array[lb + i];
    }
    // Right Sub Array
    for (j = 0; j < n2; j++)
    {
        R[j] = array[mid + 1 + j];
    }
    i = 0;  // index for L1
    j = 0;  // index for L2
    k = lb; // index at which re initialize
    // Merging Process-->
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            array[k] = L[i];
            i++;
        }
        else
        {
            array[k] = R[j];
            j++;
        }
        k++;
    }
    // Loop for Remaining element in Sub Arrays
    while (i < n1)
    {
        array[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        array[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int array[], int lb, int ub)
{
    int mid = 0;
    if (lb < ub)
    {
        mid = lb + (ub - lb) / 2;
        cout << "Mid -->" << mid << endl;
        mergeSort(array, lb, mid);
        mergeSort(array, mid + 1, ub);
        merge(array, lb, mid, ub);
    }
}
void insert_data(int array[], int size)
{
    cout << "Enter Data -->" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i << " : ";
        cin >> array[i];
    }
    cout << "Insertion Completed" << endl;
}
int main()
{
    int size;
    cout << "Enter number of element in Array : ";
    cin >> size;
    int *array = new int[size];
    cout << "insertion called --" << endl;
    insert_data(array, size);
    cout << "Merge Sort called --" << endl;
    mergeSort(array, 0, size - 1);
    print(array, size);
    return 0;
}