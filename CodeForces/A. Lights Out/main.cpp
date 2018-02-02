#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int light[3][3]={{1,1,1},{1,1,1},{1,1,1}};
void toggle_sw(int r,int c)
{
  if((r >= 0 && c >= 0)||(r <=2 && c <=2))
  light[r][c] ^= 1;
}
void toggle_adj(int r,int c)
{
  toggle_sw(r+1,c);
  toggle_sw(r-1,c);
  toggle_sw(r,c-1);
  toggle_sw(r,c+1);
}
int main()
{
  int input[3][3];
  for(int j=0;j<3;j++)
  {
    for(int i=0;i<3;i++)
    {
      cin>>input[j][i];
    }
  }
  for(int j=0;j<3;j++)
  {
    for(int i=0;i<3;i++)
    {
      for(int k=0;k<input[j][i];k++)
      {
          toggle_adj(j,i);
          toggle_sw(j,i);  
    }
    }
  }

  for(int j=0;j<3;j++)
  {
    for(int i=0;i<3;i++)
    {
      cout<<light[j][i];
    }
    cout<<endl;
  }

  return 0;
}
