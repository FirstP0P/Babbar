#include <iostream>

using namespace std;

//Bubble Sort
//Best Case Time Complexity= O(n)
//Worst Case Time Complexity= O(n2)
//Stable
//Inplace
void bubbleSort(int arr[],int n)
{
    for(int i=1;i<n;i++)  //Rounds ko represent karta h
    {
        bool swapped=false;  //Optimisation
        for(int j=0;j<n-i;j++) //Swapping
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
            break; //already swapped
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

    bubbleSort(arr,n);
    return 0;
}
