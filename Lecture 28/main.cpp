#include <iostream>

using namespace std;

void update(int n) // Here value is passed by value (Basically creates another copy)
{
    n++;
}

void update2(int &n) // Here value is passed by reference (Same memory is used)
{
    n++;
}
// Return by reference
//      |
//      |
//      v
//  int &update3(int n) //This is a bad practice because the values don't exist globally and returning the value can cause problems
//  {
//      int a = 10;
//      int &ans = a;
//      return ans;
//  }

// int *update4(int n) //This is a bad practice because the values don't exist globally and returning the value can cause problems
// {
//     int *p = &n;
//     return p;
// }

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int main()
{
    int i = 5;
    int &j = i; // Created a reference variable

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;

    int n = 5;
    cout << "Before: " << n << endl;
    update(n);
    cout << "After: " << n << endl;

    update2(n);
    cout << "After update2 : " << n << endl;

    // update3(n);
    // cout<<n;

    // update4(n);
    // cout<<n;

    int num;
    cin >> num;

    int *array = new int[num]; // Variable size array

    for (int i = 0; i < num; i++)
        cin >> array[i];

    int ans = getSum(array, num);

    cout << "Sum of the array is: " << ans << endl;

    return 0;
}