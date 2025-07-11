#include <iostream>

using namespace std;

// int fib(int n){

//     //Base casees
//     if(n==0)
//         return 0;

//     if(n==1)
//         return 1;

//     return fib(n-1)+fib(n-2);

// }

int steps(int n)
{

    // Base cases
    if (n < 0)
        return 0;

    if (n == 0)
        return 1;

    // int ans = steps(n - 2) + steps(n - 1);
    return steps(n - 2) + steps(n - 1);
}

void sayDigit(int n, string a[])
{

    // Base case
    if (n == 0)
        return;

    int digit = n % 10;
    n = n / 10;

    sayDigit(n, a); // Head Recursion

    cout << a[digit] << " ";
}

int main()
{

    int n;

    // int a=0,b=1;
    // cout<<"Enter nth fibonacci number: ";
    // cin>>n;
    // cout<<n<<"th fibonacci number is: "<<fib(n);

    cout << "Enter nth step: ";
    cin >> n;
    cout << n << "th step will have " << steps(n) << " ways to reach"<<endl;

    string a[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << "Enter the number you want to say out loud: ";
    cin >> n;
    sayDigit(n, a);

    return 0;
}