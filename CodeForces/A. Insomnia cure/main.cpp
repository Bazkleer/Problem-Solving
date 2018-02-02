#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k,l,m,n,d,cnt=0;
  cin>>k;
  cin>>l;
  cin>>m;
  cin>>n;
  cin>>d;
  if(k==1||l==1||m==1||n==1)
  {
  cout<<d<<endl;
  return 0;
  }

  else
  {for(int i=2; i<=d+1 ;i++)
  {
    if( i%k ==1 || i%l == 1|| i%m == 1||i%n == 1)
    cnt++;
  }
}
  cout<<(cnt)<<endl;

  return 0;
}
