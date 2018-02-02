#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N,current=0,next=1,strike=1,max_strike=1;
  int nums[100003]={0};
  cin>>N;

  for(int i=0;i<N;i++)
  {
    cin>>nums[i];
  }

  for(int i=0;i<N;i++)
  {
    if(nums[current]<=nums[next])
       {
        strike++;
        if(max_strike<strike)
          max_strike=strike;
      }
     else if(nums[current]>nums[next])
     strike=1;
     current++;
     next++;
  }
  cout<<max_strike<<endl;
  return 0;
}
