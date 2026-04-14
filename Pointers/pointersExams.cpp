#include <iostream>
using namespace std;

//Question1
/*int main()
{
    int a = 12;
    int b = 5;
    int* ptr = &a;
    cout << "Value of a using pointer is " << *ptr << endl;

    *ptr = 50;
    cout << "New value of a change using pointer is " << *ptr <<endl;

    int* ptr2 = &b;
    cout <<"Both values are" << " A = "<< *ptr << " and B = " << *ptr2 << endl;
    return 0;
}*/

//Question2
/*int main()
{
    int arr[] = {3, 7, 2, 9, 4};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += *(arr + i);
    }
    cout << "Sum of array is " << sum <<endl;
    return 0;
}*/

//Question3
/*int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array list: " << "[" ;
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i);
        if (i < n - 1) cout << " ";
    }
    cout << "]" << endl;

    int* start = arr;
    int* end = arr + n - 1;
    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    cout << "Reverse array list: " << "[" ;
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i);
        if (i < n - 1) cout << " ";//for space
    }
    cout << "]" << endl;
    return 0;
}*/

//Question4
int countEven(int* arr, int n)
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
int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Even numbers are of: " << countEven(arr, n) << endl;
    return 0;
}
