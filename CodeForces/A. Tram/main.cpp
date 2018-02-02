#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N,cap=0,in=0;
  int ent[1003],ext[1003];
  cin>>N;
  for(int i=0;i<N;i++)
  {
    cin>>ext[i]>>ent[i];
    in+= ent[i]-ext[i];
    if(cap<in)
    cap=in;
  }
cout<<cap<<endl;
  return 0;
}
