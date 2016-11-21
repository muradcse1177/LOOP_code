#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,n,l,i=0,j=1,reminder,reverse=0;
    cin>>n;
    a=n;
    l=n;

    while(n!=0)
    {
        n=n/10;
        i++;
    }
     while(i!=0)
    {
        reminder=a%10;
        reverse=reverse*10+reminder;
        a=a/10;

        i--;
    }
    cout<<"reverse_number:"<<reverse;
    return 0;
}




