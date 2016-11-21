#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,i=1,sum=0;
    cin>>n;
    while(i<=n)
    {
        cout<<i<<" ";
        sum=sum+i;
        i++;

    }
    cout<<endl<<"sum="<<sum;
    return 0;
}


