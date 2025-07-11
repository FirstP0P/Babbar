#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    //decimal to binary
    /*int num,r[8]={0};
    cout<<"Enter decimal number"<<endl;
    cin>>num;
    int i=7;
    while(num!=0)
    {
        r[i]=num%2;
        num=num/2;
        i--;
    }
    for(int i=0;i<8;i++)
        cout<<r[i];
    ------------------------------------------
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<"Answer is "<<ans;*/

    //binary to decimal

    int n;
    cin>>n;

    int i=0;
    int ans=0;
    while(n!=0)
    {
        int digit=n%10;
        if(digit==1)
        {
            ans=ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}
