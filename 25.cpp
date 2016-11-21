#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

long long prime(long long number)
{
    long long root=sqrt(number);
    long long i,status=0;
    if(number==2)
    {
        cout<<"Its a prime number"<<endl;
    }
    else
    {

        for(i=2; i<=root; i++)
        {
            if(number%i==0)
            {
                status=1;
                break;
            }
        }
        if(status==0)
        {
            cout<<"prime"<<endl;
        }
        else
            cout<<"not prime"<<endl;
    }
}


int main()
{
    long long number;
    cin>>number;
    prime(number);
    return 0;
}






