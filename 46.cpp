#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    int i=1,decimalValue,reminder;
    int hexvalue=0;
    int binaryNumber=0;
    cin>>decimalValue;

    while(decimalValue != 0)
     {
        reminder = decimalValue%2;
        decimalValue = decimalValue/2;
        binaryNumber= binaryNumber+ (reminder*i);
        i = i*10;
    }
    cout<<"dcimal to binary:"<<binaryNumber<<endl;
    i=1;
    hexvalue=0;
    while(binaryNumber != 0)
    {
        reminder = binaryNumber%10;
        hexvalue= hexvalue+ (reminder*i);
        i = i*2;
        binaryNumber = binaryNumber/10;
    }
    printf("Equivalent hexadecimal value: %lX",hexvalue);


    return 0;
}






