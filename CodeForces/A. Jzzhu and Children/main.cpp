#include<bits/stdc++.h>
using namespace std;
int main()
{
  int no_of_children,candy,last=0,max=0;
  int candy_line[103];
  cin>>no_of_children;
  cin >> candy;

  for(int i=0;i< no_of_children;i++){
    cin>>candy_line[i];
    if(max<candy_line[i])
      max=candy_line[i];
  }
  if(max/candy==0 || max==candy){
      cout<<no_of_children<<endl;
    return 0;
  }
  for(int j=0;j< (max/candy);j++){
    for(int i=0;i<no_of_children;i++){
      candy_line[i]-=candy;
      if(candy_line[i] > 0)
        last=i;

    }
  }

cout<<last+1<<endl;
  return 0;
}
