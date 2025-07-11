#include <stdio.h>
#include <stdlib.h>

int main()
{
    //* = value at
    //agar * address(&) k sath likha (initialization) h to wo address ko point karega
    //agar * printf aur operation mai likha h to wo address k value ko point karega
    //& = address of
    int x=10;
    //int *p;
    //int *p=&x;
    int *p=&x;
    printf("%d \n",p); //Address of x (p points to address of x)
    printf("%d \n",&x); //Address of x
    printf("%d \n",&p); //Address of p
    printf("%d \n",*p); //Value of x(pointer p points to the value ot address of x)
    printf("%d \n",x); //Value of x

    return 0;
}
