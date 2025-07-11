#include <iostream>

using namespace std;

// int factorial(int n)
// {
//     // Base case
//     if (n == 0)
//         return 1;

//     // int smallerProblem = factorial(n - 1);
//     // int biggerProblem = n * smallerProblem;
//     // return biggerProblem;

//     return n * factorial(n - 1);
// }

// int power(int n)
// {
//     //Base case
//     if (n == 0)
//         return 1;

//     // int smallerProblem = power(n - 1);
//     // int biggerProblem = 2 * smallerProblem;

//     // return biggerProblem;

//     return 2 * power(n - 1);
// }

// void print(int n)
// {
//     // Base case
//     if (n == 0)
//         return;

//     // print(n - 1); //Head Recursion 1 2 3 4 5

//     cout << n << " ";

//     print(n - 1); // Tail Recursion 5 4 3 2 1
// }

int main()
{
    int n;

    // cout << "Enter number for factorial: ";
    // cin >> n;
    // int ans = factorial(n);
    // cout << ans;

    // cout << "Enter number for power of 2: ";
    // cin >> n;
    // int ans = power(n);
    // cout << ans;

    cout << "Enter number for printing n: ";
    cin >> n;
    // cout << endl;
    // print(n);

    return 0;
}
