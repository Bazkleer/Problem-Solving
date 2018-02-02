#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string code;
  cin>>code;
  int lnth=code.length();
  for(int i=0;i<lnth;i++)
  {
    if (code[i]=='-'&& code[i+1]=='.')
    {
      code[i]='1';
      code[i+1]='3';
    }
    if (code[i]=='-'&& code[i+1]=='-')
    {
      code[i]='2';
      code[i+1]='3';
    }
    else if(code[i]=='.')
    {
      code[i]='0';
    }
  }
  for(int i=0;i<lnth;i++)
  {
    if(code[i]!='3')
    {
      cout<<code[i];
    }
  }
  return 0;
}
