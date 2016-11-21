
#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
  int i, number;
  cin>>number;
  for(i=1;i<=number;i++)
  {
      if(number%i==0)
      {
          cout<<i<<" ";
      }
  }
  return 0;
}





