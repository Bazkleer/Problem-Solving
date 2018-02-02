#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string name;
  set < char> ltrs;
  cin>>name;

  for(int i=0;i<name.length();i++)
  ltrs.insert(name[i]);

if (ltrs.size()%2==0)
cout<<"CHAT WITH HER!"<<endl;
else
cout<<"IGNORE HIM!"<<endl;
  return 0;
}
