#include <iostream>

using namespace std;

//ALL Code Ninjas
//Book Allocation Problem

/*bool isPossible(int arr[],int n,int m,int mid)
{
    int studentCount=1;
    int pageSum=0;

    for(int i=0;i<n;i++)
    {
        if(pageSum+arr[i]<=mid)
            pageSum+=arr[i];
        else
        {
            studentCount++;
            if(studentCount>m || arr[i]>mid)
                return false;
            pageSum=arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[],int n,int m)
{
    int s=0;
    int sum=0;

    for(int i=0;i<n;i++)
        sum+=arr[i];

    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(isPossible(arr,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
            s=mid+1;
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[100],n,m;

    cout<<"Enter size of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter number of students: ";
    cin>>m;

    allocateBooks(arr,n,m);

}*/
//------------------------------------------------------------------------
//Painter's Partition Problem
//Homework

/*int main()
{
    return 0;
}*/

//-------------------------------------------------------------------------
//Aggressive Cows Problem

bool isPossible(int stalls[],int k,int mid)
{
    int cowCount=1;
    int lastPos=stalls[0];

    for(int i=0;i<stalls.size();i++)
    {
        if(stalls[i]-lastPos>=mid)
        {
            cowCount++;
            if(cowCount=k)
                return true;
            lastPos=stalls[i];
        }
    }
    return false;
}

int aggressiveCows(int stalls[],int k)
{
    std::sort(stalls,stalls+n);  //+n idk
    int s=0;

    int maxi=-1;
    for(int i=0;i<stalls.size();i++)
        maxi=max(maxi,stall[i]);
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(isPossible(stalls,k,mid))
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

int main()
{
    return 0;
}

