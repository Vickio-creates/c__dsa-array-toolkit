#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size){
    cout << "[ ";
    for(int i = 0; i < size; i++){
        cout << arr[i];
        if(i < size - 1) cout << ", ";
    }
    cout << " ]" << endl;
}

int main(){
    int arr[] = {64,34,25,12,22,11,90};
    int size = 7;

    cout << "Before: ";
    printArray(arr, size);

    bubbleSort(arr, size);

    cout << "After: ";
    printArray(arr, size);

    return 0;
}