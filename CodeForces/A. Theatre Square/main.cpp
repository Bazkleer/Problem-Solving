#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,a,area,stone,num_of_stones;
  cin>>n>>m>>a;
  area=n*m;
  stone=a*a;
  num_of_stones=area/stone;

  cout<<area << " "<< stone <<" "<< num_of_stones<<endl;
  return 0;
}
