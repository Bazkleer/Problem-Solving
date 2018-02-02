#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,t,current=0,next=1;
string que;
cin>>n>>t;
cin.ignore(256,'\n');
getline(cin,que);
for(int i=0;i<t;i++)
{
  current=0;next=1;
  while(que[next]!='\0')
  {
    if(que[current]=='B'&& que[next]=='G')
    {
      que[current]='&';
      que[next]='#';
    }
    current++;
    next++;
  }
  for(int i=0;i<que.length();i++)
  {
    if (que[i]=='#')
      que[i]='B';
    else if (que[i]=='&')
      que[i]='G';
  }
}
cout<<que<<endl;
  return 0;
}
