#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,moves,intr;
  cin>>n>>m;
  intr=n*m;

  if(n==m)
  {
    moves=n;
  }
  else if(n >m)
  {
    moves=m;
  }
  else if(n<m)
    moves= n;

if(moves%2==0)
  cout<<"Malvika"<<endl;
else
cout<<"Akshat"<<endl;


  return 0;
}
