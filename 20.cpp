#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int number,power,i,temp;
    cin>>number>>power;

    temp=number;

    for(i=1; i<power;i++)
    {
        number=number*temp;
    }
    cout<<"power of number:"<<number;
    return 0;
}







