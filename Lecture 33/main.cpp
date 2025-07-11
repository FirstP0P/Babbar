#include <iostream>

using namespace std;

// bool isSorted(int *arr, int n)
// {
//     // Base case
//     if (n == 0 || n == 1) // Array is of size 0 or 1, which means it is sorted
//         return true;

//     if (arr[0] > arr[1])
//         return false;

//     else
//     {
//         // bool remainingPart = isSorted(arr + 1, n - 1);
//         // return remainingPart;

//         return isSorted(arr + 1, n - 1);
//     }

//     //Step-by-Step Recursive Breakdown:
//         // First Call (n = 5):

//         // The array is {2, 5, 6, 7, 99}.
//         // Compare arr[0] (2) and arr[1] (5)      2 is not greater than 5.
//         // Call isSorted(arr + 1, 4) (i.e., the subarray {5, 6, 7, 99}).
//         // Second Call (n = 4):

//         // The array is {5, 6, 7, 99}.
//         // Compare arr[0] (5) and arr[1] (6) → 5 is not greater than 6.
//         // Call isSorted(arr + 1, 3) (i.e., the subarray {6, 7, 99}).
//         // Third Call (n = 3):

//         // The array is {6, 7, 99}.
//         // Compare arr[0] (6) and arr[1] (7) → 6 is not greater than 7.
//         // Call isSorted(arr + 1, 2) (i.e., the subarray {7, 99}).
//         // Fourth Call (n = 2):

//         // The array is {7, 99}.
//         // Compare arr[0] (7) and arr[1] (99) → 7 is not greater than 99.
//         // Call isSorted(arr + 1, 1) (i.e., a single element {99}).
//         // Fifth Call (n = 1):

//         // The array is {99}.
//         // Since the size is 1, the base case is triggered, and the function returns true.

// }

// int sumArray(int arr[], int size, int sum)
// {

//     // Base Cases
//     if (size == 1) // Array reaches to size 1, odd number of elements
//         return sum += arr[0];

//     else if (size == 0)
//         return sum; // Array reaches to size 0, even number of elements

//     else
//     {
//         sum += arr[0] + arr[1];
//         return sumArray(arr + 2, size - 2, sum);
//     }
// }

// void linearSearch(int arr[],int key,int size){

//     //Base cases
//     if(arr[0]==key){
//         cout<<"Key is found";
//         return;
//     }
//     else if(size==0){
//         cout<<"Key is not found";
//         return;
//     }
//     else
//         search(arr+1,key,size-1);

// }

void binarySearch(int arr[], int start, int end, int key)
{

    // Element not found (Base Case)
    if (start > end)
    {
        cout << "Key is not found";
        return;
    }

    int mid = start + (end - start) / 2;

    // Element found (Base Case)
    if (arr[mid] == key)
    {
        cout << "Key is found";
        return;
    }

    if (arr[mid] < key)
        binarySearch(arr, mid + 1, end, key);
    else
        binarySearch(arr, start, mid - 1, key);
}

int main()
{

    int arr[5] = {2, 5, 6, 7, 99};
    int size = 5;

    // bool ans = isSorted(arr, size);
    // if (ans)
    //     cout << "Array is sorted" << endl;
    // else
    //     cout << "Array is not sorted" << endl;

    // int sum = 0;
    // int ans = sumArray(arr, size, sum);
    // cout << "Sum of the array is: " << ans;

    int key = 99;
    // linearSearch(arr,key,size);

    int start = 0, end = size - 1;
    binarySearch(arr, start, end, key);

    return 0;
}