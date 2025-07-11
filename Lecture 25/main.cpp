#include <iostream>

using namespace std;

//Pointer always stores address so mostly it will be 8 bytes
//p points to address
//*p points to value stored in the address

int main()
{
    int num=5;
    int *ptr=&num;

    //2nd way of initializing
    //-------------------------------
    //*p=0;
    //p=&num;
    //-------------------------------

    cout<<num<<endl;

    //address of operator &
    cout<<"Address of num is: "<<&num<<endl;
    cout<<"Address stored in ptr: "<<ptr<<endl;
    cout<<"Value pointed by ptr: "<<*ptr<<endl;
    cout<<"Address of ptr: "<<&ptr<<endl;


    //copying a pointer
    int *q=ptr;
    cout<<ptr<<"-"<<q<<endl;
    cout<<*ptr<<"-"<<*q<<endl;

    //important concepts
    int i=3;
    int *t=&i;
    cout<<(*t)++<<endl;
    *t=*t+1;

    cout<<*t<<endl;
    cout<<"Before t: "<<t<<endl;
    t=t+1;
    cout<<"After t: "<<t<<endl;
    
    cout<<"Size of integer is : "<<sizeof(i)<<endl;
    cout<<"Size of ptr t is : "<<sizeof(t)<<endl;

    cout<<"Garbage Value: "<<*t<<endl;

    return 0;
}