#include <iostream>

using namespace std;

//Find Pivot in an array

/*int getPivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;  

    while(s<e)
    {
        if(arr[mid]>=arr[0])
            s=mid+1;
        else
            e=mid;
        mid=s+(e-s)/2;
    }
    return s;
}

int main()
{
    int s=0,n,arr[100];

    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Pivot is: "<<getPivot(arr,n)<<endl;

    return 0;
}*/

//Find element in an sorted and rotated array

/*int getPivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e)
    {
        if(arr[mid]>=arr[0])
            s=mid+1;
        else
            e=mid;
        mid=s+(e-s)/2;
    }
    return s;
}

int binarysearch(int arr[],int s,int e,int key)
{
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;

    while(start <= end)
    {
        if(arr[mid]==key)
            return mid;
        if(key>arr[mid])
            start=mid+1;
        else
            end=mid-1;
        mid=start+(end-start)/2;
    }
    return -1;
}

int main()
{
    int s=0,n,arr[100],k;

    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Enter element to search: ";
    cin>>k;

    int pivot=getPivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1])
        return binarysearch(arr,pivot,n-1,k);
    else
        return binarysearch(arr,0,pivot-1,k);

    return 0;
}*/

//---------------------------------------------------------------
//Finding square root using binarysearch

long long int sqrtInteger(int n)
{
    int s=0;
    int e=n;
    long long int mid=e+(e-s)/2;
    long long int ans=-1;

    while(s<=e)
    {
        long long int square=mid*mid;

        if(square==n)
            return mid;
        if(square<n)
        {
            ans=mid;
            s=mid+1;
        }
        else
            e=mid-1;
        mid=s+(e-s)/2;
    }
    return ans;
}

double morePrecision(int n,int precision,int tempSol)
{
    double factor=1;
    double ans=tempSol;

    for(int i=0;i<precision;i++)
    {
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor)
            ans=j;
    }
    return ans;
}

int main()
{
    int n;

    cout<<"Enter number: "<<endl;
    cin>>n;

    int tempSol=sqrtInteger(n);

    cout<<"Answer is: "<<morePrecision(n,3,tempSol)<<endl;

    return 0;
}
