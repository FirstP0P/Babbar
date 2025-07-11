#include <iostream>

using namespace std;

void update(int *p){
    // p=p+1;
    // cout<<"Update Function k ander ka p: "<<p<<endl;
    *p=*p+1;
}

int main()
{
    
    //i[arr] = *(i + arr) == arr[i]= (*arr + i)
    int a[10]={2,5,6};

    cout<<"Address of first memory block is: "<<a<<endl;
    cout<<"1st: "<<a[0]<<endl;

    cout<<"Address of first memory block is: "<<&a[0]<<endl;
    cout<<"1st: "<<*a<<endl;
    cout<<"1st + 1: "<<*a + 1<<endl;
    cout<<"2nd: "<<*(a+1)<<endl<<endl;

    //-------------------------------------------------

    int arr[5]={1,2,3,4,5};
    char ch[100]="abcde";
    int number=55;
    int *ptrnum=&number;

    cout<<arr<<endl;
    //attention here
    cout<<ch<<endl;

    cout<<"1st in ch: "<<ch[0]<<endl;
    cout<<"2nd in ch: "<<ch[1]<<endl;

    cout<<"Address of 1st in ch: "<<&ch[0]<<endl;
    cout<<"Address of 2nd in ch: "<<&ch[1]<<endl;

    cout<<"Size of 1st in ch: "<<sizeof(&ch[0])<<endl;
    cout<<"Size of 2nd in ch: "<<sizeof(&ch[1])<<endl;

    char *c=&ch[0];
    //prints entire string
    cout<<c<<endl;

    cout<<*c<<endl; //Bad practice

    char temp='z'; 
    char *p=&temp; //Bad Practice

    cout<<p<<endl;

    int *ptr = arr;
    cout<<ptr[0]<<endl;
    cout<<ptr<<endl;

    cout<<ptrnum<<endl;


    int value=5;
    int *pointer=&value;

    cout<<"Before: "<<*pointer<<endl;
    update(pointer);
    cout<<"After : "<<*pointer<<endl;

    return 0;
}
