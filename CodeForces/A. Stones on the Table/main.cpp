#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  string word;
  char current=0,next=1;
  int cnt=0;
  cin>>N;
  cin.ignore(256,'\n');
  getline(cin,word);
  for(int i=current;i<N;i++)
  {
    if(word[current]==word[next])
    {
      cnt++;
    }

    current=next;
    next++;
  }
  cout<<cnt<<endl;

  return 0;
}
