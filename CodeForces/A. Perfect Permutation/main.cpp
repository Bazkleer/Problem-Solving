#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int N;
cin>>N;

if ((N%2))
cout<<-1<<endl;

else
  {
    for(int i=1; i<=N;i+=2)
    {
      cout<< i+1<<" "<< i<<" ";
    }
}
  return 0;
}
