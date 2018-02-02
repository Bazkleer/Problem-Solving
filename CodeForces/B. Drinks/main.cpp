#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N,drinks[103];
  double vol,sum=0;

  cin>>N;
  for(int i=0;i<N;i++)
  {
    cin>>drinks[i];
    sum+=drinks[i];
  }
vol = sum/N;
cout<<vol<<endl;

  return 0;
}
