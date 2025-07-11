#include <iostream>

using namespace std;

void update(int **p2)
{
    
    p2=p2+1; //Pass by value ho rh h isiliye address jo change hoga wo sirf update function mai he hoga
    // cout<<"Inside: "<<p2<<endl;
    //kuch change hoga? - NO

    // *p2=*p2+1; //*p2 points to p, which is holding the value of address of i, that's why the value is getting updated 
    //kuch change hoga? - YES

    // **p2=**p2+1; //**p2 is  pointing the value of i
    //kuch change hoga? - YES
    
}

int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;

    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;

    update(p2);

    cout<<"after "<<i<<endl;
    cout<<"after "<<p<<endl;
    cout<<"after "<<p2<<endl;
    

    int arr[5];
    int *ptr;
    cout<<sizeof(arr)<<" "<<sizeof(*ptr)<<endl;

    return 0;
}

//Questions solved in video

//34:14
// int *p=0;
// int first=100;
// *p=first;
// cout<<*p<<endl;
//So the above code will give segmentation fault, due to the null pointer
//Answer would be to change the line 49 to p=&first

//42:10
// int arr[]={11,21,31,41};
// int *ptr=arr++;
// cout<<*ptr<<endl;
//So the above code will give error as it will try to update the symbol table at line 56

