#include <stdio.h>
#include <stdlib.h>

//void abc(int *x)
//{
//    int a;
//    a=x;
//    printf("%d",a);
//}

int main()
{
    int a=10;
    //abc(&a);
    printf("%d",*(&a));

    return 0;
}

