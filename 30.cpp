#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    long long n;
    int i,m,original_num1,original_num2;
    cin>>original_num1>>original_num2;

    int reminder;

    while(original_num1<original_num2)
    {
        n=original_num1;
        int result=0;
        int count = 0;

        while(n!=0)
        {
            n=n/10;
            count++;
        }
        m=original_num1;
        for(i=1; i<=count; i++)
        {
            reminder=m%10;
            result=result+pow(reminder,count);
            m=m/10;
        }

        if(original_num1==result)
        {
            cout<<result<<endl;
        }
        original_num1++;

    }

    return 0;
}


