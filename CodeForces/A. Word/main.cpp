#include<bits/stdc++.h>
using namespace std;

int main()
{
string word;
  int lower=0, upper=0;
  int i=0;
  cin >> word;
  while(word[i]!='\0')
  {
    if (word[i] >= 65 && word[i]<= 90 )
    upper++;

    else if(word[i] >= 97 && word[i]<= 122)
    lower++;
    i++;
  }

  i=0;

while(word[i] != '\0')
{
  if(lower > upper && word[i] >= 65 && word[i]<=90)
  {
      word[i]+=32;
  }
  else if (upper > lower && word[i]>= 97 && word[i]<=122)
  {
      word[i]-=32;
  }
  else if (lower == upper && word[i]>= 65 && word[i]<=90)
  {
      word[i]+=32;
  }
  i++;
}

cout<<word<<endl;
  return 0;
}
