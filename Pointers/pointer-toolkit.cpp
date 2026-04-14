#include <iostream>
using namespace std;


//Uses pointer arithmetic to access elements.
void printArray(const int* arr, const int n)
{
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i);              // Access element using pointer
        if (i < n - 1) cout << " ";     // Avoid space after last element
    }
    cout << "]\n";
}

//Swaps two integer values using pointers.
void swapValues(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Returns the maximum value in the array.
int findMax(const int* arr, const int n)
{
    if (n == 0) return 0; // Edge case protection

    int max = *arr; // Initialize with first element
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }
    return max;
}

//Returns the minimum value in the array.
int findMin(const int* arr, const int n)
{
    if (n == 0) return 0; // Edge case protection

    int min = *arr; // Initialize with first element
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) < min)
        {
            min = *(arr + i);
        }
    }
    return min;
}

//Calculates the sum of all elements in the array.
int sumArray(const int* arr, const int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}

//Counts how many even numbers are in the array.
int countEven(const int* arr, const int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

//Reverses the array in-place using two-pointer technique.
void reverseArray(int* arr, const int n)
{
    int* start = arr;             // Pointer to first element
    int* end = arr + n - 1;       // Pointer to last element

    while (start < end)
    {
        swapValues(start, end);   // Swap values using pointers
        start++;                  // Move forward
        end--;                    // Move backward
    }
}

int main()
{
    int arr[] = {4, 7, 2, 9, 1, 6};
    const int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original: ";
    printArray(arr, n);

    cout << "Max: " << findMax(arr, n) << endl;
    cout << "Min: " << findMin(arr, n) << endl;
    cout << "Sum: " << sumArray(arr, n) << endl;
    cout << "Even count: " << countEven(arr, n) << endl;

    reverseArray(arr, n);

    cout << "Reversed: ";
    printArray(arr, n);

    return 0;
}