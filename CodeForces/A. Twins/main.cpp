#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
  {
    int N,sum=0,my_sum=0,cnt=0,j;
    int nums[103];
    cin>>N;
    for (int i=0;i<N;i++)
    {
      cin >>nums[i];
      sum+=nums[i];
    }
    sort(nums,nums+N);
    j=N;
    while(my_sum <= sum/2)
    {
      my_sum+=nums[j-1];
      cnt++;
      j--;
    }
    cout<<cnt<<endl;
    return 0;
  }
