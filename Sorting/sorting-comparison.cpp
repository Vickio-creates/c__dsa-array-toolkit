#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

//Bubble Sort
void bubbleSort(int arr[], int size){
    for (int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            }
        }
    }
    
}

//Insertion Sort
void insertionSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size){
    cout << "[ ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if(i < size -1) cout << ", ";
    }
    cout << " ]" << endl;
}

int main(){
    int sizes[] = {100, 1000, 10000};

    for(int k = 0; k < 3; k++){
        int size = sizes[k];

        int arr1[size], arr2[size];
        for(int i = 0; i < size; i++){
            arr1[i] = rand() %10000;
            arr2[i] = arr1[i];
        }
    if (size == 100) {
        cout << "Before: ";
        printArray(arr1, size);
}
        cout << "\n=== Dataset size: " << size << " ===" << endl;

        //Time Bubble Sort
        auto start1 = high_resolution_clock::now();
        bubbleSort(arr1, size);
        auto end1 = high_resolution_clock::now();
        auto duration1 = duration_cast<microseconds>(end1 - start1);
        if (size == 100) {
        cout << "Bubble Sort result: ";
        printArray(arr1, size);
}
        cout << "Bubble Sort:     " << duration1.count() << " microseconds" << endl;

        //Time Insertion Sort
        auto start2 = high_resolution_clock::now();
        insertionSort(arr2, size);
        auto end2 = high_resolution_clock::now();
        auto duration2 = duration_cast<microseconds>(end2 - start2);
        if (size == 100) {
        cout << "Insertion Sort result: ";
        printArray(arr2, size);
}
        cout << "Insertion Sort:    " << duration2.count() << " microseconds" << endl;    
    }

    return 0;
}
