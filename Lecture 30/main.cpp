#include <iostream>

using namespace std;

inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b;
}

void print(int *arr, int n, int start = 0) // Default argument for start is set as 0, if no value is passed in the parameters for the start variable then it is assigned as 0
{
    for (int i = start; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{

    int a = 1, b = 2;
    int ans = 0;

    ans = getMax(a, b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a, b);
    cout << ans << endl;

    int arr[5] = {1, 4, 7, 2, 11};
    int size = 5;
    print(arr, size);
    cout << endl;
    print(arr, size, 2);

    return 0;
}