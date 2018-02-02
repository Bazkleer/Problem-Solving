#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N,num=0;
  string cond;

  cin>>N;
  for(int i=0; i<N;i++)
  {
    cin>>cond;
    if(cond=="X++"||cond=="++X")
    num++;
    else if (cond=="X--"||cond=="--X")
    num--;
  }
cout<<num<<endl;
  return 0;
}
