#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N,max=0,min=9900,temp;
  int max_idx,min_idx,cnt=0;
  int sold[103];
  cin>>N;
  for(int i=0;i<N;i++)
  {
    cin>>sold[i];
    if(sold[i] > max)
    {
      max=sold[i];
      max_idx=i;
    }
  }

  cnt=max_idx;

  for(int i=max_idx;i>0;i--)
  {
    temp=sold[i];
    sold[i]=sold[i-1];
    sold[i-1]=temp;
  }

  for(int i=0;i<N;i++)
  {
    if(sold[i] <= min)
    {
      min=sold[i];
      min_idx=i;
    }
  }
  cnt = cnt +(N-1-min_idx);

  cout<<cnt<<endl;

  return 0;
}
