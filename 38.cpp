#include<iostream>
#include<cstdio>
#include<cstring>
#include <cstdlib>
using namespace std;

int main()
{
    long int binaryNumber,octalNumber=0,j=1,remainder;


    cin>>binaryNumber;

    while(binaryNumber!=0){
         remainder=binaryNumber%10;
        octalNumber=octalNumber+remainder*j;
        j=j*2;
        binaryNumber=binaryNumber/10;
    }

    printf("Equivalent octal value: %lo",octalNumber);

    return 0;
}




