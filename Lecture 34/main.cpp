#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

// void reverse(string &name, int i, int j)
// {
//     // Base case
//     if (i > j)
//         return;

//     swap(name[i++], name[j--]);

//     // Recursive call
//     reverse(name, i, j);
// }

// Using only 1 variable = i
//  void reverse(string &name, int i, int n)
//  {
//      cout<<name<<endl;
//      // Base case
//      if (i==n/2)
//          return;

//     swap(name[i], name[n-i]);
//     i++;

//     // Recursive call
//     reverse(name, i, n);
// }

// bool checkPalindrome(string &palindrome,int i,int j){

//     //Base case
//     if(i>j)
//         return true;

//     if(palindrome[i++]!=palindrome[j--])
//         return false;
//     else
//         return checkPalindrome(palindrome,i,j);

// }

// Using only 1 variable = i
//  bool checkPalindrome(string &palindrome,int i,int n){

//     //Base case
//     if(i>n/2)
//         return true;

//     if(palindrome[i]!=palindrome[n-(i++)])
//         return false;

//     else
//         return checkPalindrome(palindrome,i,n);

// }

// int power(int a, int b)
// {
//     // Base cases
//     if (b == 0)
//         return 1;

//     if (b == 1)
//         return a;

//     int ans = power(a, b / 2);

//     if (b % 2 == 0)
//         return ans * ans;
//     else
//         return a * ans * ans;
// }

//------------------------------------------------------------------
// Sorting Algorithms

// void bubbleSort(int *arr, int n)
// {
//     // Base case
//     if (n == 0 || n == 1)
//         return;

//     for (int i = 0; i < n - 1; i++)
//     {
//         if (arr[i] > arr[i + 1])
//             swap(arr[i], arr[i + 1]);
//     }
//     bubbleSort(arr, n - 1);
// }

// void selectionSort(int *arr, int n)
// {

//     // Base case
//     if (n == 0 || n == 1)
//         return;

//     int temp = INT_MAX;
//     int index = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < temp)
//         {
//             temp = arr[i];
//             index = i;
//         }
//     }

//     swap(arr[index], arr[0]);

//     selectionSort(arr + 1, n - 1);
// }

void insertionSort(int *arr,int n,int i){

    //Base case
    if (i == n || n == 0)
        return;

    for(int j=i-1;j>=0;j--)
    {
        if (arr[j+1] < arr[j])
            swap(arr[j+1],arr[j]);
    }
    insertionSort(arr,n,++i);
}

int main()
{

    // string name = "anish";
    // reverse(name, 0, name.length() - 1);
    // cout << name;

    // string palindrome="taeneat";
    // if(checkPalindrome(palindrome,0,palindrome.length()-1))
    //     cout<<"It is a palindrome";
    // else
    //     cout<<"It is not a palindrome";

    // int a = 2, b = 10;
    // cout << power(a, b);

    //------------------------------------------------------------------
    // Sorting Algorithms

    int arr[5] = {123, -7, 6, 4, 9};
    int n = 5;

    // bubbleSort(arr, n);
    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";

    // selectionSort(arr, n);
    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";

    insertionSort(arr,n,1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}