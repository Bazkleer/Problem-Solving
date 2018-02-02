#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N,total=0,cnt=0;
  int fingers[103];
  int dimas[5];
  cin>>N;
  for(int i=0;i<N;i++){
    cin>>fingers[i];
    total+=fingers[i];
  }
  for(int i=1;i<=5;i++)
  {
    dimas[i]=total+i;
    if(N==1){
      if(dimas[i]%2==0)
      cnt++;
    }
    else if((dimas[i]-1)%(N+1))
      cnt++;
  }

  cout<<cnt<<endl;
  return 0;
}
