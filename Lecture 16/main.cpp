#include <iostream>

using namespace std;

//Selection Sort
//Best Case Time Complexity= O(n2)
//Worst Case Time Complexity= O(n2)
//Stable
//Inplace
void selectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
               minIndex=j;
        }
        std::swap(arr[minIndex],arr[i]);
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[100],n;

    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    selectionSort(arr,n);
    return 0;
}
