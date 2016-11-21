#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    int a,n,l,i=0,reminder;
    cin>>n;
    a=n;
    l=n;

    while(n!=0)
    {
        n=n/10;
        i++;
    }
    //cout<<i<<endl;
    int sum=0;
    int j=0;

    while(a!=0)
    {


        reminder=a%10;
        a=a/10;
        sum=sum+reminder*pow(8,j);
        j++;
    }
    cout<<"octal to decimal:"<<sum;


    return 0;
}




