#include <iostream>

using namespace std;

int findMax(int arr[], int n)
{
    int largestNumber = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largestNumber)
        {
            largestNumber = arr[i];
        }
    }
    return largestNumber;
}

int findMin(int arr[], int n)
{
    int smallestNumber = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallestNumber)
        {
            smallestNumber = arr[i];
        }
    }
    return smallestNumber;
}

void reverseArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int sumArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

float averageArray(int arr[], int n)
{
    int sum = sumArray(arr, n);
    return (float)sum / n;
}

int countEven(int arr[], int n)
{
    int evenCounter = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCounter++;
        }
    }
    return evenCounter;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int new_arr[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> new_arr[i];
    }

    cout << "\nOriginal Array: [";
    for (int i = 0; i < n; i++)
    {
        cout << new_arr[i];
        if (i < n - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    cout << "The largest number in the array: " << findMax(new_arr, n) << endl;
    cout << "The smallest number in the array: " << findMin(new_arr, n) << endl;
    cout << "The sum of numbers in the array: " << sumArray(new_arr, n) << endl;
    cout << "The average of numbers in the array: " << averageArray(new_arr, n) << endl;
    cout << "The even count in the array: " << countEven(new_arr, n) << endl;
    reverseArray(new_arr, n);
    cout << "Reverse Array: [";
    for (int i = 0; i < n; i++)
    {
        cout << new_arr[i];
        if (i < n - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}