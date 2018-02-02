#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N,cnt=0,sum=0;
  int p;

  cin >>N;
  for(int i=0;i<N;i++)
  {
    sum=0;
    for(int j=0;j<3;j++)
    {  cin >>p;
      if(p==1)
      sum++;
    }

    if(sum>=2)
    cnt++;
  }
    cout<<cnt<<endl;
  return 0;
}
