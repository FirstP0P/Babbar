#include <iostream>
#include <algorithm>

using namespace std;

/*void printarray(int arr[],int size)
{
    cout<<"printing array"<<endl;
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<"done"<<endl;
}

void printarray1(char arr[],int size)
{
    cout<<"printing array"<<endl;
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<"done"<<endl;
}

int main()
{
    int first[5]={11,22,3,4,5};
    printarray(first,5);

    int size=sizeof(first)/sizeof(int);
    cout<<endl<<size<<endl<<endl;
    //sizeof is used to find the amount of memory it accommodates

    char ch[6]={'q','w','e','r','t','y'};
    printarray1(ch,6);
    return 0;
}*/
//-------------------------------------------------------------
/*int getmin(int num[],int size)
{
    int min1;
    for(int i=0;i<size;i++)
    {
        min1=min(min1,num[i]);
        //if(num[i]<min)
            //min=num[i];
    }
    return min1;
}

int getmax(int num[],int size)
{
    int max1=0;
    for(int i=0;i<size;i++)
    {
        max1=max(max1,num[i]);
        //if(num[i]>max)
            //max=num[i];
    }
    return max1;
}

int main()
{
    int size,num[100];
    cin>>size;

    for(int i=0;i<size;i++)
        cin>>num[i];

    cout<<"Maximum value is "<<getmax(num,size)<<endl;
    cout<<"Minimum value is "<<getmin(num,size)<<endl;

    return 0;
}*/
//------------------------------------------------
//changes happen in array in other function while using array
/*void update(int arr[],int n)
{
    cout<<"Inside the function"<<endl;

    arr[0]=120;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[3]={1,2,3};
    update(arr,3);
    cout<<endl<<"Printing in main function"<<endl;
    for(int i=0;i<3;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}*/
//--------------------------------------------------
//Power of 2 using signed bits

// unsigned int pow2(int n)
// {
//     int count=0;
//     while(n)
//     {
//         count=count+(n&1);
//         n=n>>1;
//     }
//     return count;
// }

// int main()
// {
//     unsigned int a;
//     cout<<"Enter number"<<endl;
//     cin>>a;
//     int ans=pow2(a);
//     if(ans==1)
//         cout<<"It is a power of 2"<<endl;
//     else
//         cout<<"It is not a power of 2"<<endl;
//     return 0;
// }
//----------------------------------------------------
//HOMEWORK : Sum of elements

/*int sum(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
        ans=ans+arr[i];
    return ans;
}

int main()
{
    int a[100],size;
    cout<<"Enter size"<<endl;
    cin>>size;
    for(int i=0;i<5;i++)
        cin>>a[i];

    cout<<"Sum of elements "<<sum(a,size);

    return 0;
}*/

/*void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[6]={4,62,2,41,12,3};
    int brr[5]={32,4,12,8,7};

    reverse(arr,6);
    reverse(brr,5);

    printarray(arr,6);
    printarray(brr,5);

    return 0;
}*/
//----------------------------------------------------
//Homework Que 1
//Swap Alternate elements in array

/*void altswap(int arr[],int n)
{
    for(int i=0;i<n;i=i+2)
    {
        if(i+1<n)
            swap(arr[i],arr[i+1]);
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int a[100],n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    altswap(a,n);
    return 0;
}*/
//----------------------------------------------------
//Homework Que 2
//Find Unique element in array
/*void unique(int arr[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if((arr[i]==arr[j])&&(i!=j))
                break;
        }
        if(j==size)
            cout<<"Unique element = "<<arr[i]<<endl;
    }
}

//Babbar
int findUnique(int *arr, int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
        ans=ans^arr[i];

    return ans;
}

int main()
{
    int arr[100],size;
    cout<<"How many elements: "<<endl;
    cin>>size;
    cout<<"Enter "<<size<<" elements"<<endl;
    for(int i=0;i<size;i++)
            cin>>arr[i];
    unique(arr,size);

    return 0;
}*/
//-----------------------------------------------------------
//Homework Que 3
//Find Duplicate element in array

/*int duplicate(int arr[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((j<i)&&(arr[i]==arr[j]))
                break;
            else if((arr[i]==arr[j])&&(i!=j))
            {
                cout<<"Duplicate element: "<<arr[i]<<endl;
                break;
            }
        }
    }
    return -1;
}

//Babbar

int findDuplicate(vector<int> &arr)
{
    int ans=0;
    for(int i=0;i<arr.size();i++)
        ans=ans^arr[i];

    for(int i=1;i<arr.size();i++)
        ans=ans^i;

    return ans;
}

int main()
{
    int arr[100],dup[100],n;
    cout<<"How many elements: "<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    duplicate(arr,n);

    return 0;
}*/
//-----------------------------------------------------------
//Homework Que 4
//Find intersecting elements in two arrays

/*void sort(int a[],int b[],int n1,int n2)
{
    std::sort(a,a+n1);
    std::sort(b,b+n2);

    cout<<endl<<"1st sorted array: ";
    for(int i=0;i<n1;i++)
        cout<<a[i]<<" ";
    cout<<endl<<"2nd sorted array: ";
    for(int i=0;i<n2;i++)
        cout<<b[i]<<" ";
    cout<<endl;
}

int inter(int a[],int b[],int n1,int n2)
{
    sort(a,b,n1,n2);
    int i,j,c=0;

    cout<<endl<<"Intersecting elements are: ";
    for(i=0;i<n1;i++)
    {
        for(j=c;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                c=j;
                c++;
                break;
            }
        }
    }
    cout<<endl;

    return -1;
}

//GPT

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> intersection;
    int i = 0, j = 0;

    while(i < n && j < m)
    {
        if(arr1[i] < arr2[j])
        {
            i++;
        }
        else if(arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            intersection.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    return intersection;
}

int main()
{
    int a[100],b[100],n1,n2;

    cout<<"Enter number of elements for 1st array: ";
    cin>>n1;
    cout<<"Enter elements: ";
    for(int i=0;i<n1;i++)
        cin>>a[i];

    cout<<"Enter number of elements for 2nd array: ";
    cin>>n2;
    cout<<"Enter elements: ";
    for(int i=0;i<n2;i++)
        cin>>b[i];

    inter(a,b,n1,n2);

    return 0;
}*/
//-------------------------------------------------------------
//Homework Que 5
//Pair Sum

/*void pairsum(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            cout<<"Pair:("<<min(arr[i],arr[j])<<","<<max(arr[i],arr[j])<<")"<<endl;
        }
    }
}

int main()
{
    int arr[100],n,sum;

    cout<<"Enter sum: ";
    cin>>sum;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    pairsum(arr,n,sum);

    return 0;
}*/
//----------------------------------------------------
//Homework Que 6
//Triplet Sum

/*void tripletsum(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==sum)
                {
                    cout<<"Triplet("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                    i++;
                    j=j+2;
                }
            }
        }
    }
}

int main()
{
    int arr[100],n,sum;

    cout<<"Enter sum: ";
    cin>>sum;
    cout<<"Enter number of elements: ";
    cin>>n;
        cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    tripletsum(arr,n,sum);
    return 0;
}*/
//------------------------------------------------------
//Homework Que 7
//Sorting 0's and 1's

/*int main()
{
    int arr[100],n;

    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    std::sort(arr,arr+n);

    for(int i=0;i<n;i++)
        cout<<arr[i];

    return 0;
}*/
//-----------------------------------------------------
//Homework Que 8
//Sorting 0's,1's and 2's;

/*int main()
{
    int arr[100],n;

    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    std::sort(arr,arr+n);

    for(int i=0;i<n;i++)
        cout<<arr[i];

    return 0;
}*/
