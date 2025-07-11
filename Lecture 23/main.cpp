#include <iostream>
#include <limits.h>

using namespace std;

/*int main()
{
    int a[3][3];

    cout<<"Enter numbers: "<<endl;

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cout<<a[i][j]<<" ";

    int sum=0,largestSum=INT_MIN,largestRow=-1;

    for(int i=0;i<3;i++)
        {
           for(int j=0;j<3;j++)
            {
               sum+=a[i][j];
            }

            cout<<endl<<"Row "<<i+1<<" : "<<sum;
            if(sum>largestSum)
            {
                largestSum=sum;
                largestRow=i+1;
            }
            sum=0;
        }
        cout<<endl<<largestSum;
        cout<<endl<<largestRow;


    return 0;
}*/

int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j;
    for(j=0;j<3;j++)
    {
        if(j%2==0)
            for(i=0;i<3;i++)
                cout<<a[i][j]<<" ";
        else
            for(i=i-1;i>=0;i--)
                cout<<a[i][j]<<" ";
    }


    return 0;
}
