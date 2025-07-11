#include <iostream>

using namespace std;

//Insertion Sort
//Best Case Time Complexity= O(n)
//Worst Case Time Complexity= O(n2)
//Stable
//Inplace
void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(temp<arr[j]) //shift
                arr[j+1]=arr[j];
            else
                break;
        }
        arr[j+1]=temp;
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
    insertionSort(arr,n);

    return 0;
}
