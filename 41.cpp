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
    //cout<<"octal to decimal:"<<decimalValue<<endl;


    vector <int> v;

    while(decimalValue!=0)
    {
        int j=1;
        reminder=decimalValue%2;
        v.push_back(reminder);
        decimalValue=decimalValue/2;
    }
    reverse(v.begin(),v.end());
    //cout << "decimal to binary:";
    cout<<"octal to binary:";
    for (vector<int>::iterator it=v.begin(); it!=v.end(); ++it)
        cout<< *it;


    return 0;
}




