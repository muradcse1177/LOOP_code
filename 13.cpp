
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,n,l,i=0,reminder,mul=1;
    cin>>n;
    a=n;
    l=n;

    while(n!=0)
    {
        n=n/10;
        i++;
    }
    cout<<"count_number:"<<i;
    return 0;
}





