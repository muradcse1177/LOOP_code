#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
  int i,j, number,status;
  cin>>number;
  for(i=2;i<=number;i++)
  {
      if(number%i==0)
      {
          status=0;
           for(j=2;j<=i/2;j++)
           {
               if(i%j==0)
               {
                   status=1;
                   break;
               }
           }
           if(status!=1)
           {
               cout<<i<<" ";
           }

      }
  }
  return 0;
}





