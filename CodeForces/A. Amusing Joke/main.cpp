#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int alph[100]={0};
  int haha_alph[100]={0};
  string word_1,word_2,haha_word;
  cin>>word_1;
  cin>>word_2;
  cin>>haha_word;


  if(haha_word.length()!=(word_1.length()+word_2.length()))
  {
    cout<<"NO"<<endl;
    return 0;
  }

  for(int i=0; i<word_1.length();i++)
  {
    alph[word_1[i]]++;
  }

  for(int i=0; i<word_2.length();i++)
  {
    alph[word_2[i]]++;
  }

  for(int i=0;i<haha_word.length();i++)
    haha_alph[haha_word[i]]++;

for(int i =65;i<91;i++)
{
  if(haha_alph[i]!=alph[i])
  {
    cout<<"NO"<<endl;
    return 0;
  }
  else
  continue;
}
cout<<"YES"<<endl;
  return 0;
}
