#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int a,n,l,i=0,reminder;
    cin>>n;
    a=n;
    l=n;

    while(n!=0)
    {
        n=n/10;
        i++;
    }
    int arr[100];
    vector <int> v;

    while(a!=0)
    {
        int j=1;
        reminder=a%2;
        v.push_back(reminder);
        a=a/2;
    }
    reverse(v.begin(),v.end());
    cout << "decimal to binary:";
    for (vector<int>::iterator it=v.begin(); it!=v.end(); ++it)
        cout<< *it;
    return 0;


}



