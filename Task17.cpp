#include <iostream>
#include <stack>
#include <stdexcept>
using namespace std;

// Sorting Algorithms.

void bubbleSort(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void selectionSort(int arr[], int size)
{
    for(int i =0, j=i+1 ; i < size ; i++, j++)
    {
        int minIndex= i;
        
        for(int j =i+1 ; j < size -1 ; j++)
        {
            if(arr[minIndex] > arr[j])
            {
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

void insertionSort(int arr[], int size)
{
   for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

        // Print the array after each insertion
        cout << "After inserting " << key << ": ";
        for (int k = 0; k <= i; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    
    
}





int main() {
    
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamic allocation of the array
    // int* arr = new int[size];

    // cout << "Enter elements of the array:" << endl;
    // for (int i = 0; i < size; i++) {
    //     cin >> arr[i];
    // }

    // Sorting the array using Bubble Sort
    //bubbleSort(arr, size);
    
    
    
    int arr[size];
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        insertionSort(arr, i + 1); 
    }

    cout << "Sorted array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
   // delete[] arr;

  
    return 0;
}
