#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    int i=1,decimalValue,reminder;
    int octalNumber=0;
    cin>>decimalValue;
    while(decimalValue != 0)
    {
        reminder = decimalValue%8;
        decimalValue = decimalValue/8;
        octalNumber= octalNumber+ (reminder*i);
        i = i*10;
    }
    cout<<"dcimal to binary:"<<octalNumber<<endl;


    return 0;
}






