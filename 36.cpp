#include<iostream>
#include<cstdio>
#include<cstring>
#include <cstdlib>
using namespace std;

int main()
{
    char binaryNumber[100], onesComplement[100],twosComp[100];
    int counter, error=0, digitCount, carry=1;
    cout<<"Enter a Binary Number:";
    cin>>binaryNumber;
    digitCount = strlen(binaryNumber);

    for(counter=0; counter < digitCount; counter++)
    {
        if(binaryNumber[counter]=='1')
        {
            onesComplement[counter] = '0';
        }
        else if(binaryNumber[counter]=='0')
        {
            onesComplement[counter] = '1';
        }
        else
        {
            printf("Error");
        }
    }

    onesComplement[digitCount] = '\0';

    cout<<"ones complement:"<<onesComplement<<endl;

    for(counter=digitCount-1; counter>=0; counter--)
    {
        if(onesComplement[counter]=='1' && carry==1)
        {
            twosComp[counter] = '0';
        }
        else if(onesComplement[counter]=='0' && carry==1)
        {
            twosComp[counter] = '1';
            carry = 0;
        }
        else
        {
            twosComp[counter] = onesComplement[counter];
        }
    }
    twosComp[digitCount] = '\0';

    cout<<"tows complements:"<<twosComp<<endl;

    return 0;
}



