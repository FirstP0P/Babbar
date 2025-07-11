#include <stdio.h>
#include <stdlib.h>
// doesnt swap
/*
void swap(int x,int y)
{
    int t=x;
    x=y;
    y=t;
}
void main()
{
    int a=10,b=20;
    printf("a=%d b=%d\n",a,b);
    swap(a,b);
    printf("a=%d b=%d",a,b);
}
*/

void swap(int *x,int*y)
{
    int t=*x;
    *x=*y;
    *y=t;
}
void main()
{
    int a=10,b=20;
    printf("a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d b=%d",a,b);
}
