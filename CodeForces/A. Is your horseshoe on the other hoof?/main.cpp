#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int s1,s2,s3,s4;
  set<int>blah_blah;
  cin>>s1>>s2>>s3>>s4;
  blah_blah.insert(s1);
  blah_blah.insert(s2);
  blah_blah.insert(s3);
  blah_blah.insert(s4);

  cout<<4-blah_blah.size()<<endl;
  return 0;
}
