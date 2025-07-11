#include <iostream>

using namespace std;

//Functioning of Cin and Cout
/*void reverse(char name[],int len)
{
    int s=0;
    int e=len-1;

    while(s<e)
        swap(name[s++],name[e--]);
}

int getLength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
        count++;

    return count++;
}

int main()
{
    char name[20];

    cout<<"Enter your name: ";
    cin>>name;

    cout<<"Your name is "<<name<<endl;

    int len=getLength(name);
    cout<<"Length of String is: "<<len<<endl;

    reverse(name,len);
    cout<<"Reversed Name: "<<name;

    return 0;
}*/

//--------------------------------------------------------------------------------------------------------


//Check if palindrome or not without special characters (Incomplete)
/*char toLowercase(char ch)
{
    if(ch >='a' && ch<= 'z')
        return ch;
    else
        char temp= ch - 'A' + 'a';
}

bool checkPalindrome(char name[],int len)
{
    int s=0,e=len-1;

    while(s<=e)
    {
        if(((name[s]>='A' && name[s]<='Z') || (name[s]>='a' && name[e]<='z')) || ((name[e]>='A' && name[e]<='Z') || (name[e]>='a' && name[e]<='z')))
        {
            if(toLowercase(name[s]) != toLowercase(name[e]))
                return 0;
        }

        else
        {
            s++;
            e--;

            char spCharS=name[s],spCharE=name[e];

            while(spCharS<'0' || (spCharS>'9' && spCharS<'A') || (spCharS>'Z' && spCharS<'a') || spCharS>'z' )
                spCharS=name[s++];

            while(spCharE<'0' || (spCharE>'9' && spCharE<'A') || (spCharE>'Z' && spCharE<'a') || spCharE>'z')
                spCharE=name[e--];
        }
    }
    return 1;
}

void reverse(char name[],int len)
{
    int s=0;
    int e=len-1;

    while(s<e)
        swap(name[s++],name[e--]);
}

int getLength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
        count++;

    return count++;
}

int main()
{
    char name[20];

    cout<<"Enter your name: ";
    cin>>name;

    cout<<"Your name is "<<name<<endl;

    int len=getLength(name);
    cout<<"Length of String is: "<<len<<endl;

    reverse(name,len);
    cout<<"Reversed Name: "<<name<<endl;

    cout<<"Palindrome or Not: "<< checkPalindrome(name, len)<<endl;

    return 0;
}*/

//------------------------------------------------------------------------------------------------------

//getline(cin,'stringname') <---- This will accept the entire string including whitespace

/*int main()
{
    string s1,s2;

    cout<<"Tell me your name: "<<endl;
    getline(cin,s1);

    cout<<s1<<endl;

    cin>>s2;
    cout<<s2;


    return 0;
}*/



