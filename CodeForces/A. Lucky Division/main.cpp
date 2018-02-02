#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int num,dgt;
bool found_7=0,found_4=0;
cin>>num;
if (num %4==0 || num %7==0 || num %47==0 || num%74==0 || num%444==0||num%474==0||num%747==0||num%777==0)
cout<<"YES\n";
else
{
  while(num !=0)
  {
    dgt=num%10;
    num/=10;
    if(!(dgt==7||dgt==4))
    {
      cout<<"NO\n";
      return 0;
    }
}
    cout<<"YES\n";
}
  return 0;
}
