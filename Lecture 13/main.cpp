#include <iostream>

using namespace std;

//First and Last Occurrence & Number of Occurrences
int firstocc(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans=1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid])
            s=mid+1;
        else if(key<arr[mid])
            e=mid-1;
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastocc(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans=1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid])
            s=mid+1;
        else if(key<arr[mid])
            e=mid-1;

        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int even[11]={1,2,3,3,3,3,3,3,3,3,5};

    cout<<"First Occurrence of 3 is at index: "<<firstocc(even,11,3)<<endl;
    cout<<"Last Occurrence of 3 is at index: "<<lastocc(even,11,3)<<endl;
    cout<<"Number of Occurrences of 3 is: "<<lastocc(even,11,3)-firstocc(even,11,3)+1;

    return 0;
}

//-------------------------------------------------------------------------

//Find Peak in Mountain Array
/*
int main()
{
    int s=0,n,arr[100];

    cout<<"Enter n of array: ";
    cin>>n;

    int e=n-1;
    int mid=s+(e-s)/2;

    cout<<"Enter elements in array in mountain order: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
            s=mid+1;
        else
            e=mid;
        mid=s+(e-s)/2;
    }
    return s;
}*/
