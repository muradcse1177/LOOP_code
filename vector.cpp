#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
    vector <int> v;
    int i,input;
    cin>>input;


    for(i=0;i<input;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }


    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}


