#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, k, l, c, d, p, nl, np;
  int drink,salt,toast,limes;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  drink =k*l;
  toast=drink/n;
  limes=c*d;
  salt=p/np;
  cout<< (min(toast,limes,salt))/nl<<endl;

  return 0;
}
