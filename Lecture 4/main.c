#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int n=5,m=5;

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            printf("%d",j);// if i is written in place of j then 1111 \n 2222 \n 3333 \n 4444
        }
        printf("\n");
    }
    return 0;
}*/

/*int main()
{
    int n=5;
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<i+1;j++) //output will be 1 12 123 1234 12345
        {
            printf("%d",j);
        }
        printf("\n");
    }
}*/

/*int main()
{
    int n=5;
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<i+1;j++) //output will be 12345 1234 123 12 1
        {
            printf("%d",j);
        }
        printf("\n");
    }
}*/

int main()
{
    int n=5,a=0;
    for(int i=n;i>0;i--)
    {
        ++a;
        for(int j=1;j<i+1;j++) //output will be 11111 2222 333 44 5
        {
            printf("%d",a);
        }
        printf("\n");
    }
}
