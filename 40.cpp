#include<iostream>
#include<cstdio>
#include<cstring>
#include <cstdlib>
using namespace std;

int main()
{
    long int binaryNumber,hexvalue=0,j=1,remainder;


    cin>>binaryNumber;

    while(binaryNumber!=0){
         remainder=binaryNumber%10;
        hexvalue=hexvalue+remainder*j;
        j=j*2;
        binaryNumber=binaryNumber/10;
    }

    printf("Equivalent hexadecimal value: %lX",hexvalue);

    return 0;
}





