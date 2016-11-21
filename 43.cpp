#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    int a,octalValue,l,i=0,reminder;
    cin>>octalValue;
    a=octalValue;
    l=octalValue;

    while(octalValue!=0)
    {
        octalValue=octalValue/10;
        i++;
    }
    //cout<<i<<endl;
    int decimalValue=0;
    int j=0;

    while(a!=0)
    {


        reminder=a%10;
        a=a/10;
        decimalValue=decimalValue+reminder*pow(8,j);
        j++;
    }
    cout<<"octal to decimal:"<<decimalValue<<endl;
     i=1;
     int binaryNumber=0;
    while(decimalValue != 0)
     {
        reminder = decimalValue%2;
        decimalValue = decimalValue/2;
        binaryNumber= binaryNumber+ (reminder*i);
        i = i*10;
    }
    cout<<"dcimal to binary:"<<binaryNumber<<endl;
    int hexvalue=0;
    int k=1;
    while(binaryNumber!=0)
    {
        reminder=binaryNumber%10;
        hexvalue=hexvalue+reminder*k;
        k=k*2;
        binaryNumber=binaryNumber/10;
    }

    printf("Equivalent hexadecimal value: %lX",hexvalue);


    return 0;
}





