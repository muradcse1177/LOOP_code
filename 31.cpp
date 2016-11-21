#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int i, num1,num2, sum = 0;
    cin>>num1>>num2;

    while(num1<num2)
    {
        int sum=0;
        for(i=1; i<num1; i++)
        {
            if(num1%i==0)
            {
                sum =sum+ i;
            }
        }
        if(sum == num1)
        {
            cout<<"Perfect number:"<<sum<<endl;
        }
        num1++;
    }

    return 0;
}




