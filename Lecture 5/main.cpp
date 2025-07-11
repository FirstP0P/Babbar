#include <iostream>

using namespace std;

int main()
{
    // int a=4,b=6;
    // cout<<"a&b "<<(a&b)<<endl;
    // cout<<"a|b "<<(a|b)<<endl;
    // cout<<"~a "<<~a<<endl;
    // cout<<"a^b "<<(a^b)<<endl;

    // cout<<(14>>3)<<endl;
    // cout<<(14<<1)<<endl;

    // int i=8;
    // cout<<i++<<endl;
    // cout<<++i<<endl;
    // cout<<i--<<endl;
    // cout<<--i<<endl;

    // //HOMEWORK
    // 1st que
    // int a,b=1;
    // a=10;
    // if(++a)
    // {
    //     cout<<a<<endl;
    //     cout<<b;
    // }
    // else
    //     cout<<++b;

    //2nd,3rd que

    // int a=1;
    // int b=2;
    // if(a-->0 || ++b>2)
    //     cout<<"Stage 1-Inside If"<<endl;
    // else
    //     cout<<"Stage 2-Inside else"<<endl;
    // cout<<a<<" "<<b<<endl;

    // //4th que
    // int number=3;
    // cout<<(25*(++number))<<endl;

    //5th que

    int a=1;
    int b=a++;
    int c=++a;
    cout<<b<<endl;
    cout<<c;

    //HW
    cout<<endl;
    for (int i=0;i<=5;i++)
    {
        cout<<i<<" ";
        i++;
    } cout<<endl;

    for(int i=0;i<=15;i+=2)
    {
        cout<<i<<" ";
        if(i&1)
        {
            continue;
        }
        i++;
    }
    cout<<endl;

    for(int i=0;i<5;i++)
    {
        for(int j=i;j<=5;j++)
        {
            if(i+j==6)
            {
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }

    int i=8;
    for(;i<10;i++)
        cout<<i<<endl;
    return 0;
}
