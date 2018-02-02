#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isDiff(int year)
{
  int dgt[4];
  for(int i=0;i<4;i++)
  {
    dgt[i]=year%10;
    year /=10;
  }
  if((dgt[0]==dgt[1]||dgt[0]==dgt[2]||dgt[0]==dgt[3])||\
  (dgt[1]==dgt[0]||dgt[1]==dgt[2]||dgt[1]==dgt[3])||\
  (dgt[2]==dgt[0]||dgt[2]==dgt[1]||dgt[2]==dgt[3])||\
  (dgt[3]==dgt[0]||dgt[3]==dgt[1]||dgt[3]==dgt[2]))
  {
    return false;
  }
  return true;
}

int main()
{
  int year;
  cin>>year;
while(1)
{
  year++;
  if(isDiff(year))
  {
    cout<<year<<endl;
    return 0;
  }
}

  return 0;
}
