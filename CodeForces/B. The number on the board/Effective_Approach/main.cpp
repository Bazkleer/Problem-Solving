#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int num=5000050000;
    cout<<num;
 int n,m;
  int temp;
 long long int sum_front=0;
 long long int sum_rear=0;

  int nums[100003]={0};
  int front[100003]={0};
  int rear[100003]={0};


cin>>n;
  for(int i=0;i<n;i++)
  {
    cin >> nums[i];
    temp=nums[i];
    front[temp]=i+1;
    rear[temp]=n-i;
  }

  cin >>m ;
  for(int i=0;i<m;i++)
  {
      cin >> temp;
   sum_front+= front[temp];
   sum_rear+=rear[temp];
  }

cout<<sum_front<<" "<<sum_rear<<endl;
  return 0;
}
