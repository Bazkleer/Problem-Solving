#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  int left[10005],rigth[10005];
  int one_l=0,one_r=0,moves=0;
  cin>>N;
  for(int i=0;i<N;i++)
  {
    cin>>left[i]>>rigth[i];
    if(left[i]==1)
    one_l++;
    if(rigth[i]==1)
    one_r++;
  }
  if(one_l>(N-one_l))
  moves +=(N-one_l);
  else if(one_l<(N-one_l))
  moves +=(one_l);
  else
  moves+=one_l;

  if(one_r>(N-one_r))
  moves +=(N-one_r);
  else if(one_r<(N-one_r))
  moves +=(one_r);
  else
  moves+=one_r;

  cout<<moves<<endl;

  return 0;
}
