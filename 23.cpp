#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
  int i,n1,n2, gcd;
  cin>>n1>>n2;
  for(i=1;i<=n1&&i<=n2;i++)
  {
      if(n1%i==0 && n2%i==0)
      {
          gcd=i;
      }

  }
  cout<<"GCD:"<<gcd<<endl;
  return 0;
}



