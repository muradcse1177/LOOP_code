#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,i=1,sum=0,s;
    cin>>n;
    while(i<=n)
    {
        if(i%2==0)
        {
            s=i;
            cout<<i<<" ";
            sum=sum+s;
        }

        i++;

    }
    cout<<endl<<"sum="<<sum<<endl;
    return 0;
}


