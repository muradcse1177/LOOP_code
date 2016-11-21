#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int i, num, sum = 0;
    cin>>num;
    for(i=1; i<num; i++)
    {
        if(num%i==0)
        {
            sum =sum+ i;
        }
    }
    if(sum == num)
    {
        cout<<"Perfect number:"<<num<<endl;
    }
    else
    {
        cout<<"is not a Perfect number";
    }

    return 0;
}



