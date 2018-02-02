#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,m;
  long long int fcnt=0,lcnt=0;
   bool f_found=false, l_found=false;

  int nums[1000003];
  int vals[1000003];

  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin >> nums[i];
  }

  cin>>m;
  for(int j=0;j<m;j++)
  {
    cin>>vals[j];
    f_found=false; l_found=false;
    for(int i=0;i<n;i++)
      {
          if (vals[j]!=nums[i]&&  !f_found)
           fcnt++;
          else if(vals[j]==nums[i])
          {f_found=true;
          fcnt++;
          }
          if (vals[j] != nums[n-1-i]&&!l_found)
              lcnt++;
            else if(vals[j] == nums[n-1-i])
             { l_found=true;
                lcnt++;
        }
    }
  }

cout<<fcnt<<" "<<lcnt<<endl;
  return 0;
}
