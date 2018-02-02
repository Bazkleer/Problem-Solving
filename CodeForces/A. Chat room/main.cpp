
#include<bits/stdc++.h>
using namespace std;

int main()
{
  char hello[5]={'h','e','l','l','o'};
  int i=0,j=0;
  string  word;
  cin>>word;
  while(word[i]!='\0')
  {
    if(word[i]==hello[j])
    {
      j++;
    }
    i++;
  }
if(j==5)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

  return 0;
}
