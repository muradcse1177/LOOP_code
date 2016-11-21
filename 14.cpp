
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,n,l,i=0,j=1,reminder;
    cin>>n;
    a=n;
    l=n;

    while(n!=0)
    {
        n=n/10;
        i++;
    }
     while(i!=1)
    {
        reminder=l%10;
        a=a/10;

        i--;
    }
    cout<<"1st element"<<a<<endl;
    cout<<"last element"<<reminder<<endl;

    int temp;
    temp=a;
    a=reminder;
    reminder=temp;
    cout<<"after swaping 1st element"<<a<<endl;
    cout<<"after swaping last element"<<reminder;

    return 0;
}



