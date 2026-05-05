#include <iostream>
using namespace std;

void printArray(int* arr, int size){
    for(int i = 0; i < size; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int* findMaxPointer(int* arr, int size){
    int* maxPtr = arr;
    for(int i = 1; i < size; i++){
        if(*(arr + i) > *maxPtr){
            maxPtr = arr + i;
        }
    }
    return maxPtr;
}

void swapPointers(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
} 

int main(){
    int arr[] = {5, 3,8,1,9,2};
    int size = 6;
    
    int* maxPtr = findMaxPointer(arr, size);
    cout << "Max value: " << *maxPtr << endl;
    cout << "Max address: " << maxPtr << endl;

    cout << "Before swap: ";
    printArray(arr, size);

    swapPointers(arr, maxPtr);

    cout << "After swap: ";
    printArray(arr, size);

    return 0;
}