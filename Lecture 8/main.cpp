#include <iostream>

using namespace std;

/*int main()
{
    /*int a,b;
    char op;
    cout<<"Enter value of a and b"<<endl;
    cin>>a;
    cin>>b;

    cout<<"Enter operator"<<endl;
    cin>>op;

    switch(op)
        {
            case '+':
                {
                    cout<<"Answer is "<<(a+b)<<endl;
                    break;
                }
            case '-':
                {
                    cout<<"Answer is "<<(a-b)<<endl;
                    break;
                }
            case '*':
                {
                    cout<<"Answer is "<<(a*b)<<endl;
                    break;
                }
            case '/':
                {
                    cout<<"Answer is "<<(a/b)<<endl;
                    break;
                }
            case '%':
                {
                    cout<<"Answer is "<<(a%b)<<endl;
                    break;
                }
            default:
                {
                    cout<<"Please enter a valid operator"<<endl;
                    break;
                }
        }*/
//DENOMINATION
/*   int ans,num,num1,num2,num3,num4,deno;
    cout<<"Enter amount: ";
    cin>>num;
    num1=num2=num3=num4=num;

    while(1)
    {
        cout<<"Choose denomination: \n100\n50\n20\n1\nExit=0\n\nSelect: ";
        cin>>deno;
        if(deno==0)
            break;
        switch(deno)
        {
            case 100:
                {
                    ans=num1/100;
                    cout<<"100 = "<<ans<<endl<<endl;
                    break;
                }
            case 50:
                {
                    num2=num2-((num2/100)*100);
                    ans=num2/50;
                    cout<<"50 = "<<ans<<endl<<endl;
                    break;
                }
            case 20:
                {
                    num3=num3-((num3/100)*100);
                    num3=num3-((num3/50)*50);
                    ans=num3/20;
                    cout<<"20 = "<<ans<<endl<<endl;
                    break;
                }
            case 1:
                {
                    num4=num4-((num4/100)*100);
                    num4=num4-((num4/50)*50);
                    num4=num4-((num4/20)*20);
                    cout<<"1 = "<<num4<<endl<<endl;
                    break;
                }
        }
    }
    return 0;
}
*/
//-----------------------------------------------
//Functions

/*bool isEven(int a)
    {
        if(a&1)
            return 0;
        return 1;
    }

    int main()
    {
        int num;
        cin>>num;

        if(isEven(num))
            cout<<"Number is even"<<endl;
        else
            cout<<"Number is odd"<<endl;
    return 0;
}*/
//------------------------------------------------

/*int fact(int n)
{
    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int ncr(int a,int b)
{
    int num=fact(a);
    int deno=fact(b)*fact(a-b);
    return num/deno;
}
int main()
{
    int n,r;
    cout<<"Enter n and r"<<endl;
    cin>>n>>r;
    cout<<"Answer is "<<ncr(n,r);

    return 0;
}*/
//------------------------------------------------
/*bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int a;
    cout<<"Enter number: ";
    cin>>a;
    if(isPrime(a))
        cout<<"It is a prime number";
    else
        cout<<"It is not a prime number";
    return 0;
}*/
//--------------------------------------------------
//HOMEWORK
//1st que

/*int ap(int a)
{
    return 3*a+7;
}

int main()
{
    int a;
    cout<<"Enter number for Arithmetic progression";
    cin>>a;
    cout<<"Answer is: "<<ap(a)<<endl;
    return 0;
}*/
//-------------------------------------------------
//2nd que
//Number of set bits

int bit(int a)
{
    int c=0;
    while(a!=0)
    {
        if(a&1)
            c++;
        a=a>>1;
    }
    return c;
}

int main()
{
    int a,b;
    cout<<"Enter numbers for bits: ";
    cin>>a>>b;
    cout<<"Answer is: "<<bit(a)+bit(b);
    return 0;
}
//------------------------------------------------
//3rd que

/*int fib(int n)
{
    int a=0,b=1;
    if(n==1)
        return a;
    else if(n==2)
        return b;
    else
    {
        for(int i=3;i<=n;i++)
        {
            int temp=b;
            b=a+b;
            a=temp;
        }
    }
    return b;
}

int main()
{
    int a;
    cout<<"Enter number for fibonacci: "<<endl;
    cin>>a;
    cout<<"term will be: "<<fib(a);
    return 0;
}*/
