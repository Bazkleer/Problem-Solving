#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int num;
  int dgt,cnt=0;
  cin>>num;
  while(num!=0)
  {
    dgt=num %10;
    num /=10;
    if(dgt == 4 || dgt==7)
    cnt ++;
  }
  if (cnt ==4 || cnt == 7)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;

  return 0;
}
