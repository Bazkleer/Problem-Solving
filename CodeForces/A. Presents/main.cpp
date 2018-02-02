#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N,x;
  cin>>N;
  map <int,int> gift;
  for (int i=1;i<=N;i++)
  {
    cin >>x;
    gift[x]=i;
  }
  for(int i=1;i<=N;i++)
  {
    cout<<gift[i]<<" ";
  }

  return 0;
}
