#include <iostream>

using namespace std;

void reverse(int a[],int n,int m)
{
    int size=n;
    while(m<=n)
    {
        swap(a[m],a[n]);
        m++;
        n--;
    }
    for(int i=0;i<=size;i++)
        printf("%d ",a[i]);
}

int main()
{
    int a[7]={5,63,1,4,65,3,2};
    int n=7-1,m=2;
    reverse(a,n,m);

    return 0;
}
